#ifndef POKOJ3VIEW_HPP
#define POKOJ3VIEW_HPP

#include <gui_generated/pokoj3_screen/pokoj3ViewBase.hpp>
#include <gui/pokoj3_screen/pokoj3Presenter.hpp>

class pokoj3View : public pokoj3ViewBase
{
public:
    pokoj3View();
    virtual ~pokoj3View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
    virtual void oswietleniePok3ButtonClicked();
protected:
};

#endif // POKOJ3VIEW_HPP
