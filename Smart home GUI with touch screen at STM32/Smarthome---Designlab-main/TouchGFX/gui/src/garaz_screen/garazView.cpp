#include <gui/garaz_screen/garazView.hpp>

garazView::garazView()
{

}

void garazView::setupScreen()
{
    garazViewBase::setupScreen();

    if (presenter->getLadowanie())
    {
        charging.forceState(true);
        charging.invalidate();
    }
    else
    {
        charging.forceState(false);
        charging.invalidate();
    }


}

void garazView::tearDownScreen()
{
    garazViewBase::tearDownScreen();
}

void garazView::ladowanieButtonClicked()
{
    if (charging.getState())
    {
        presenter->setLadowanie(true);
    }
    else
    {
        presenter->setLadowanie(false);
    }
}

