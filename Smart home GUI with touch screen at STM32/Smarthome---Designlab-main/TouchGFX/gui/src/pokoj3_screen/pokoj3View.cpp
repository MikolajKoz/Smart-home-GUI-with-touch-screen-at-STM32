#include <gui/pokoj3_screen/pokoj3View.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>

pokoj3View::pokoj3View()
{

}

void pokoj3View::setupScreen()
{
    pokoj3ViewBase::setupScreen();


    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempPok3());
    textCounter.resizeToCurrentText();

    if (presenter->getPok3Oswietlenie())
    {
        lamp.forceState(true);
        lamp.invalidate();
    }
    else
    {
        lamp.forceState(false);
        lamp.invalidate();
    }

}

void pokoj3View::tearDownScreen()
{
    pokoj3ViewBase::tearDownScreen();
}
void pokoj3View::tempUp()
{
    int temp = presenter->getTempPok3();
    if (temp < 30)
    {
        temp++;
        presenter->setTempPok3(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void pokoj3View::tempDown()
{
    int temp = presenter->getTempPok3();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempPok3(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void pokoj3View::oswietleniePok3ButtonClicked()
{
    if (lamp.getState())
    {
        presenter->setPok3Oswietlenie(true);
    }
    else
    {
        presenter->setPok3Oswietlenie(false);
    }
}