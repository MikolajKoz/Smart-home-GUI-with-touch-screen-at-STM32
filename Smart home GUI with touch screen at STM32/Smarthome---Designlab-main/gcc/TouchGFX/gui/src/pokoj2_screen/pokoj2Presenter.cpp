#include <gui/pokoj2_screen/pokoj2View.hpp>
#include <gui/pokoj2_screen/pokoj2Presenter.hpp>

pokoj2Presenter::pokoj2Presenter(pokoj2View& v)
    : view(v)
{

}

void pokoj2Presenter::activate()
{

}

void pokoj2Presenter::deactivate()
{

}
void pokoj2Presenter::setTempPok2(int temp)
{
    model->setTempPok2(temp);
}
int pokoj2Presenter::getTempPok2()
{
    return model->getTempPok2();
}
void pokoj2Presenter::setPok2Oswietlenie(bool on)
{
    model->setPok2Oswietlenie(on);
}
bool pokoj2Presenter::getPok2Oswietlenie()
{
    return model->getPok2Oswietlenie();
}