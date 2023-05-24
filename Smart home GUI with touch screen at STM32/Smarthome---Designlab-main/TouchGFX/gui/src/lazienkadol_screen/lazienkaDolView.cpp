#include <gui/lazienkadol_screen/lazienkaDolView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


lazienkaDolView::lazienkaDolView()
{

}

void lazienkaDolView::setupScreen()
{
    lazienkaDolViewBase::setupScreen();


    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempLazDol());
    textCounter.resizeToCurrentText();

    if (presenter->getLazDolPodgrzewanie())
    {
        floorHeating.forceState(true);
        floorHeating.invalidate();
    }
    else
    {
        floorHeating.forceState(false);
        floorHeating.invalidate();
    }

}

void lazienkaDolView::tearDownScreen()
{
    lazienkaDolViewBase::tearDownScreen();
}
void lazienkaDolView::tempUp()
{
    int temp = presenter->getTempLazDol();
    if (temp < 30)
    {
        temp++;
        presenter->setTempLazDol(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void lazienkaDolView::tempDown()
{
    int temp = presenter->getTempLazDol();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempLazDol(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void lazienkaDolView::podgrzewanieLazDolButtonClicked()
{
    if (floorHeating.getState())
    {
        presenter->setLazDolPodgrzewanie(true);
    }
    else
    {
        presenter->setLazDolPodgrzewanie(false);
    }
}