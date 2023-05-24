#ifndef RZUTBOCZNYVIEW_HPP
#define RZUTBOCZNYVIEW_HPP

#include <gui_generated/rzutboczny_screen/RzutBocznyViewBase.hpp>
#include <gui/rzutboczny_screen/RzutBocznyPresenter.hpp>

class RzutBocznyView : public RzutBocznyViewBase
{
public:
    RzutBocznyView();
    virtual ~RzutBocznyView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RZUTBOCZNYVIEW_HPP
