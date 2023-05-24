#include <gui/pokoj1_screen/pokoj1View.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


pokoj1View::pokoj1View()
{

}

void pokoj1View::setupScreen()
{
    pokoj1ViewBase::setupScreen();


    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempPok1());
    textCounter.resizeToCurrentText();

    if (presenter->getPok1Oswietlenie())
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

void pokoj1View::tearDownScreen()
{
    pokoj1ViewBase::tearDownScreen();
}
void pokoj1View::tempUp()
{
    int temp = presenter->getTempPok1();
    if (temp < 30)
    {
        temp++;
        presenter->setTempPok1(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void pokoj1View::tempDown()
{
    int temp = presenter->getTempPok1();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempPok1(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void pokoj1View::oswietleniePok1ButtonClicked()
{
    if (lamp.getState())
    {
        presenter->setPok1Oswietlenie(true);
    }
    else
    {
        presenter->setPok1Oswietlenie(false);
    }
}