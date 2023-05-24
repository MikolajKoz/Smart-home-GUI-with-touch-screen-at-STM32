#include <gui/salon_screen/salonView.hpp>
#include <gui/salon_screen/salonPresenter.hpp>

salonPresenter::salonPresenter(salonView& v)
    : view(v)
{

}

void salonPresenter::activate()
{

}

void salonPresenter::deactivate()
{

}

void salonPresenter::setTempSalon(int temp)
{
    model->setTempSalon(temp);
}
int salonPresenter::getTempSalon()
{
    return model->getTempSalon();
}
void salonPresenter::setSalonPodgrzewanie(bool on)
{
    model->setSalonPodgrzewanie(on);
}
bool salonPresenter::getSalonPodgrzewanie()
{
    return model->getSalonPodgrzewanie();
}
void salonPresenter::setSalonOswietlenie(bool on)
{
    model->setSalonOswietlenie(on);
}
bool salonPresenter::getSalonOswietlenie()
{
    return model->getSalonOswietlenie();
}