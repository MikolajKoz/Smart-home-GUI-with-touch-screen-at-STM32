#ifndef GARAZVIEW_HPP
#define GARAZVIEW_HPP

#include <gui_generated/garaz_screen/garazViewBase.hpp>
#include <gui/garaz_screen/garazPresenter.hpp>

class garazView : public garazViewBase
{
public:
    garazView();
    virtual ~garazView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void ladowanieButtonClicked();
protected:
};

#endif // GARAZVIEW_HPP
