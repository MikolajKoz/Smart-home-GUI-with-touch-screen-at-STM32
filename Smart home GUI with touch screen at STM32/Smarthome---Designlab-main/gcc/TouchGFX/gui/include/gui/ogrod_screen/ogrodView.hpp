#ifndef OGRODVIEW_HPP
#define OGRODVIEW_HPP

#include <gui_generated/ogrod_screen/ogrodViewBase.hpp>
#include <gui/ogrod_screen/ogrodPresenter.hpp>

class ogrodView : public ogrodViewBase
{
public:
    ogrodView();
    virtual ~ogrodView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempPUp();
    virtual void tempPDown();
    virtual void podlewanieOgrodButtonClicked();
    virtual void oswietlenieOgrodButtonClicked();
protected:
 
};

#endif // OGRODVIEW_HPP
