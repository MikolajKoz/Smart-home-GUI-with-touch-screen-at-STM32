#include <gui/kuchnia_screen/kuchniaView.hpp>
#include <touchgfx/utils.hpp>

kuchniaView::kuchniaView()
{
  
}

void kuchniaView::setupScreen()
{
    kuchniaViewBase::setupScreen();


    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", presenter->getTempKuchnia());
    textCounter.resizeToCurrentText();

    if (presenter->getKuchniaPodgrzewanie())
    {
        floorHeating.forceState(true);
        floorHeating.invalidate();
    }
    else
    {
        floorHeating.forceState(false);
        floorHeating.invalidate();
    }

    if (presenter->getKuchniaOswietlenie())
    {
        lamp.forceState(true);
        lamp.invalidate();
    }
    else
    {
        lamp.forceState(false);
        lamp.invalidate();
    }

    if (presenter->getKuchniaSzafka())
    {
        shelfLamp.forceState(true);
        shelfLamp.invalidate();
    }
    else
    {
        shelfLamp.forceState(false);
        shelfLamp.invalidate();
    }
}

void kuchniaView::tearDownScreen()
{
    kuchniaViewBase::tearDownScreen();
}


void kuchniaView::tempUp()
{
    int temp = presenter->getTempKuchnia();
    if (temp < 30)
    {
        temp++;
        presenter->setTempKuchnia(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void kuchniaView::tempDown()
{
    int temp = presenter->getTempKuchnia();
    if (temp <= 30 && temp > 15)
    {
        temp--;
        presenter->setTempKuchnia(temp);
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", temp);
        textCounter.invalidate();
    }
}

void kuchniaView::podgrzewanieKuchniaButtonClicked()
{
    if (floorHeating.getState())
    {
        presenter->setKuchniaPodgrzewanie(true);
    }
    else
    {
        presenter->setKuchniaPodgrzewanie(false);
    }   
}

void kuchniaView::oswietlenieKuchniaButtonClicked()
{
    if (lamp.getState())
    {
        presenter->setKuchniaOswietlenie(true);
    }
    else
    {
        presenter->setKuchniaOswietlenie(false);
    }
}

void kuchniaView::szafkaKuchniaButtonClicked()
{
    if (shelfLamp.getState())
    {
        presenter->setKuchniaSzafka(true);
    }
    else
    {
        presenter->setKuchniaSzafka(false);
    }
}