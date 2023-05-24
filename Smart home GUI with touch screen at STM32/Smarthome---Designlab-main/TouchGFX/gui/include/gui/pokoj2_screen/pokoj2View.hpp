#ifndef POKOJ2VIEW_HPP
#define POKOJ2VIEW_HPP

#include <gui_generated/pokoj2_screen/pokoj2ViewBase.hpp>
#include <gui/pokoj2_screen/pokoj2Presenter.hpp>

class pokoj2View : public pokoj2ViewBase
{
public:
    pokoj2View();
    virtual ~pokoj2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
    virtual void oswietleniePok2ButtonClicked();
protected:
    int counter{};
};

#endif // POKOJ2VIEW_HPP
