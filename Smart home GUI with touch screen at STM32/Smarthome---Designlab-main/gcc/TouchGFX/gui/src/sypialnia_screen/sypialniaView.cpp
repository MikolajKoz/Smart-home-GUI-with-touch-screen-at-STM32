#include <gui/sypialnia_screen/sypialniaView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


sypialniaView::sypialniaView()
{
}

void sypialniaView::setupScreen()
{
    sypialniaViewBase::setupScreen();
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempSyp());
    textCounter.resizeToCurrentText();

    if (presenter->getSypOswietlenie())
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

void sypialniaView::tearDownScreen()
{
    sypialniaViewBase::tearDownScreen();
}
void sypialniaView::tempUp()
{
    int temp = presenter->getTempSyp();
    if (temp < 30)
    {
        temp++;
        presenter->setTempSyp(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void sypialniaView::tempDown()
{
    int temp = presenter->getTempSyp();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempSyp(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void sypialniaView::oswietlenieSypButtonClicked()
{
    if (lamp.getState())
    {
        presenter->setSypOswietlenie(true);
    }
    else
    {
        presenter->setSypOswietlenie(false);
    }
}