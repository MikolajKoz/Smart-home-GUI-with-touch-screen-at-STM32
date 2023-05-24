#include <gui/pokoj2_screen/pokoj2View.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


pokoj2View::pokoj2View()
{
}

void pokoj2View::setupScreen()
{
    pokoj2ViewBase::setupScreen();
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempPok2());
    textCounter.resizeToCurrentText();

    if (presenter->getPok2Oswietlenie())
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

void pokoj2View::tearDownScreen()
{
    pokoj2ViewBase::tearDownScreen();
}
void pokoj2View::tempUp()
{
    int temp = presenter->getTempPok2();
    if (temp < 30)
    {
        temp++;
        presenter->setTempPok2(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void pokoj2View::tempDown()
{
    int temp = presenter->getTempPok2();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempPok2(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void pokoj2View::oswietleniePok2ButtonClicked()
{
    if (lamp.getState())
    {
        presenter->setPok2Oswietlenie(true);
    }
    else
    {
        presenter->setPok2Oswietlenie(false);
    }
}