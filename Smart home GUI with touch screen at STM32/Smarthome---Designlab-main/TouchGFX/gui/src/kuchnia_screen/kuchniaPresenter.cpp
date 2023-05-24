#include <gui/kuchnia_screen/kuchniaView.hpp>
#include <gui/kuchnia_screen/kuchniaPresenter.hpp>

kuchniaPresenter::kuchniaPresenter(kuchniaView& v)
    : view(v)
{

}

void kuchniaPresenter::activate()
{

}

void kuchniaPresenter::deactivate()
{

}

void kuchniaPresenter::setTempKuchnia(int temp)
{
    model->setTempKuchnia(temp);
}

int kuchniaPresenter::getTempKuchnia()
{
    return model->getTempKuchnia();
}

void kuchniaPresenter::setKuchniaPodgrzewanie(bool on)
{
    model->setKuchniaPodgrzewanie(on);
}

bool kuchniaPresenter::getKuchniaPodgrzewanie()
{
    return model->getKuchniaPodgrzewanie();
}
void kuchniaPresenter::setKuchniaOswietlenie(bool on)
{
    model->setKuchniaOswietlenie(on);
}
bool kuchniaPresenter::getKuchniaOswietlenie()
{
    return model->getKuchniaOswietlenie();
}
void kuchniaPresenter::setKuchniaSzafka(bool on)
{
    model->setKuchniaSzafka(on);
}
bool kuchniaPresenter::getKuchniaSzafka()
{
    return model->getKuchniaSzafka();
}