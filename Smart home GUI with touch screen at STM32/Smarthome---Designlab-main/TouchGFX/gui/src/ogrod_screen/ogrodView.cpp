#include <gui/ogrod_screen/ogrodView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


ogrodView::ogrodView()
{

}

void ogrodView::setupScreen()
{
    ogrodViewBase::setupScreen();

    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempBasen());
    textCounter.resizeToCurrentText();

    if (presenter->getOgrodPodlewanie())
    {
        watering.forceState(true);
        watering.invalidate();
    }
    else
    {
        watering.forceState(false);
        watering.invalidate();
    }

    if (presenter->getOgrodOswietlenie())
    {
        gardenLamp.forceState(true);
        gardenLamp.invalidate();
    }
    else
    {
        gardenLamp.forceState(false);
        gardenLamp.invalidate();
    }

}

void ogrodView::tearDownScreen()
{
    ogrodViewBase::tearDownScreen();
}

void ogrodView::tempPUp()
{
    int temp = presenter->getTempBasen();
    if (temp < 45)
    {
        temp++;
        presenter->setTempBasen(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void ogrodView::tempPDown()
{
    int temp = presenter->getTempBasen();
    if (temp <= 45 && temp > 15)
    {
        temp--;
        presenter->setTempBasen(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}
void ogrodView::podlewanieOgrodButtonClicked()
{
    if (watering.getState())
    {
        presenter->setOgrodPodlewanie(true);
    }
    else
    {
        presenter->setOgrodPodlewanie(false);
    }
}
void ogrodView::oswietlenieOgrodButtonClicked()
{
    if (gardenLamp.getState())
    {
        presenter->setOgrodOswietlenie(true);
    }
    else
    {
        presenter->setOgrodOswietlenie(false);
    }
}