#include <gui/lazienkadol_screen/lazienkaDolView.hpp>
#include <gui/lazienkadol_screen/lazienkaDolPresenter.hpp>

lazienkaDolPresenter::lazienkaDolPresenter(lazienkaDolView& v)
    : view(v)
{

}

void lazienkaDolPresenter::activate()
{

}

void lazienkaDolPresenter::deactivate()
{

}
void lazienkaDolPresenter::setTempLazDol(int temp)
{
    model->setTempLazDol(temp);
}
int lazienkaDolPresenter::getTempLazDol()
{
    return model->getTempLazDol();
}
void lazienkaDolPresenter::setLazDolPodgrzewanie(bool on)
{
    model->setLazDolPodgrzewanie(on);
}
bool lazienkaDolPresenter::getLazDolPodgrzewanie()
{
    return model->getLazDolPodgrzewanie();
}