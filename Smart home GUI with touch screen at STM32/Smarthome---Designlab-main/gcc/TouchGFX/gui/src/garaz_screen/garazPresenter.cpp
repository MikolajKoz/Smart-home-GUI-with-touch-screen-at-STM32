#include <gui/garaz_screen/garazView.hpp>
#include <gui/garaz_screen/garazPresenter.hpp>

garazPresenter::garazPresenter(garazView& v)
    : view(v)
{

}

void garazPresenter::activate()
{

}

void garazPresenter::deactivate()
{

}
void garazPresenter::setLadowanie(bool on)
{
    model->setLadowanie(on);
}
bool garazPresenter::getLadowanie()
{
    return model->getLadowanie();
}