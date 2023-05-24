#include <gui/pokoj1_screen/pokoj1View.hpp>
#include <gui/pokoj1_screen/pokoj1Presenter.hpp>

pokoj1Presenter::pokoj1Presenter(pokoj1View& v)
    : view(v)
{

}

void pokoj1Presenter::activate()
{

}

void pokoj1Presenter::deactivate()
{

}
void pokoj1Presenter::setTempPok1(int temp)
{
    model->setTempPok1(temp);
}
int pokoj1Presenter::getTempPok1()
{
    return model->getTempPok1();
}
void pokoj1Presenter::setPok1Oswietlenie(bool on)
{
    model->setPok1Oswietlenie(on);
}
bool pokoj1Presenter::getPok1Oswietlenie()
{
    return model->getPok1Oswietlenie();
}