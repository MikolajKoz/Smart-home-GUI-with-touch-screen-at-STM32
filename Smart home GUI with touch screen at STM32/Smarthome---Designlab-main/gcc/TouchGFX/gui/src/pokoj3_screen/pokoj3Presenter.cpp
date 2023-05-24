#include <gui/pokoj3_screen/pokoj3View.hpp>
#include <gui/pokoj3_screen/pokoj3Presenter.hpp>

pokoj3Presenter::pokoj3Presenter(pokoj3View& v)
    : view(v)
{

}

void pokoj3Presenter::activate()
{

}

void pokoj3Presenter::deactivate()
{

}
void pokoj3Presenter::setTempPok3(int temp)
{
    model->setTempPok3(temp);
}
int pokoj3Presenter::getTempPok3()
{
    return model->getTempPok3();
}
void pokoj3Presenter::setPok3Oswietlenie(bool on)
{
    model->setPok3Oswietlenie(on);
}
bool pokoj3Presenter::getPok3Oswietlenie()
{
    return model->getPok3Oswietlenie();
}