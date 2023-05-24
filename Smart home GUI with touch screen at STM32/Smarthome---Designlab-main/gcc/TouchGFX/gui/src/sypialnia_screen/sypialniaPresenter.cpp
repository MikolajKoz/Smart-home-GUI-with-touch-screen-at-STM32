#include <gui/sypialnia_screen/sypialniaView.hpp>
#include <gui/sypialnia_screen/sypialniaPresenter.hpp>

sypialniaPresenter::sypialniaPresenter(sypialniaView& v)
    : view(v)
{

}

void sypialniaPresenter::activate()
{

}

void sypialniaPresenter::deactivate()
{

}
void sypialniaPresenter::setTempSyp(int temp)
{
    model->setTempSyp(temp);
}
int sypialniaPresenter::getTempSyp()
{
    return model->getTempSyp();
}
void sypialniaPresenter::setSypOswietlenie(bool on)
{
    model->setSypOswietlenie(on);
}
bool sypialniaPresenter::getSypOswietlenie()
{
    return model->getSypOswietlenie();
}