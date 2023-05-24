#include <gui/lazienkagora_screen/lazienkaGoraView.hpp>
#include <gui/lazienkagora_screen/lazienkaGoraPresenter.hpp>

lazienkaGoraPresenter::lazienkaGoraPresenter(lazienkaGoraView& v)
    : view(v)
{

}

void lazienkaGoraPresenter::activate()
{

}

void lazienkaGoraPresenter::deactivate()
{

}
void lazienkaGoraPresenter::setTempLazGora(int temp)
{
    model->setTempLazGora(temp);
}
int lazienkaGoraPresenter::getTempLazGora()
{
    return model->getTempLazGora();
}
void lazienkaGoraPresenter::setLazGoraPodgrzewanie(bool on)
{
    model->setLazGoraPodgrzewanie(on);
}
bool lazienkaGoraPresenter::getLazGoraPodgrzewanie()
{
    return model->getLazGoraPodgrzewanie();
}
void lazienkaGoraPresenter::setSauna(bool on)
{
    model->setSauna(on);
}
bool lazienkaGoraPresenter::getSauna()
{
    return model->getSauna();
}