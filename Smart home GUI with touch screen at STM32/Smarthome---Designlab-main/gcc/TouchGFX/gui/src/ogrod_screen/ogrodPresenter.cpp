#include <gui/ogrod_screen/ogrodView.hpp>
#include <gui/ogrod_screen/ogrodPresenter.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


ogrodPresenter::ogrodPresenter(ogrodView& v)
    : view(v)
{

}

void ogrodPresenter::activate()
{

}

void ogrodPresenter::deactivate()
{

}
void ogrodPresenter::setTempBasen(int temp)
{
    model->setTempBasen(temp);
}
int ogrodPresenter::getTempBasen()
{
    return model->getTempBasen();
}
void ogrodPresenter::setOgrodPodlewanie(bool on)
{
    model->setOgrodPodlewanie(on);
}
bool ogrodPresenter::getOgrodPodlewanie()
{
    return model->getOgrodPodlewanie();
}
void ogrodPresenter::setOgrodOswietlenie(bool on)
{
    model->setOgrodOswietlenie(on);
}
bool ogrodPresenter::getOgrodOswietlenie()
{
    return model->getOgrodOswietlenie();
}