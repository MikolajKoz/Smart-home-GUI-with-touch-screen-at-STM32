#include <gui/salon_screen/salonView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>



salonView::salonView()
{
 
}

void salonView::setupScreen()
{
    salonViewBase::setupScreen();


    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempSalon());
    textCounter.resizeToCurrentText();

    if (presenter->getSalonPodgrzewanie())
    {
        floorHeating.forceState(true);
        floorHeating.invalidate();
    }
    else
    {
        floorHeating.forceState(false);
        floorHeating.invalidate();
    }

    if (presenter->getSalonOswietlenie())
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

void salonView::tearDownScreen()
{
    salonViewBase::tearDownScreen();
}
void salonView::tempUp()
{
    int temp = presenter->getTempSalon();
    if (temp < 30)
    {
        temp++;
        presenter->setTempSalon(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void salonView::tempDown()
{
    int temp = presenter->getTempSalon();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempSalon(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void salonView::podgrzewanieSalonButtonClicked()
{
    if (floorHeating.getState())
    {
        presenter->setSalonPodgrzewanie(true);
    }
    else
    {
        presenter->setSalonPodgrzewanie(false);
    }
}

void salonView::oswietlenieSalonButtonClicked()
{
    if (lamp.getState())
    {
        presenter->setSalonOswietlenie(true);
    }
    else
    {
        presenter->setSalonOswietlenie(false);
    }
}