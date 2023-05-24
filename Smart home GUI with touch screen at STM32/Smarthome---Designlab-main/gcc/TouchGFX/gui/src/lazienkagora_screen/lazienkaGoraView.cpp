#include <gui/lazienkagora_screen/lazienkaGoraView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>

lazienkaGoraView::lazienkaGoraView()
{
}

void lazienkaGoraView::setupScreen()
{
    lazienkaGoraViewBase::setupScreen();
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempLazGora());
    textCounter.resizeToCurrentText();

    if (presenter->getLazGoraPodgrzewanie())
    {
        floorHeating.forceState(true);
        floorHeating.invalidate();
    }
    else
    {
        floorHeating.forceState(false);
        floorHeating.invalidate();
    }

    if (presenter->getSauna())
    {
        sauna.forceState(true);
        sauna.invalidate();
    }
    else
    {
        sauna.forceState(false);
        sauna.invalidate();
    }
    
}

void lazienkaGoraView::tearDownScreen()
{
    lazienkaGoraViewBase::tearDownScreen();
}

void lazienkaGoraView::tempWUp()
{
    int temp = presenter->getTempLazGora();
    if (temp < 30)
    {
        temp++;
        presenter->setTempLazGora(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void lazienkaGoraView::tempWDown()
{
    int temp = presenter->getTempLazGora();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempLazGora(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void lazienkaGoraView::podgrzewanieLazGoraButtonClicked()
{
    if (floorHeating.getState())
    {
        presenter->setLazGoraPodgrzewanie(true);
    }
    else
    {
        presenter->setLazGoraPodgrzewanie(false);
    }
}
void lazienkaGoraView::saunaButtonClicked()
{
    if (sauna.getState())
    {
        presenter->setSauna(true);
    }
    else
    {
        presenter->setSauna(false);
    }
}