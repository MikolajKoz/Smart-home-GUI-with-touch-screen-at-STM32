#ifndef POKOJ1VIEW_HPP
#define POKOJ1VIEW_HPP

#include <gui_generated/pokoj1_screen/pokoj1ViewBase.hpp>
#include <gui/pokoj1_screen/pokoj1Presenter.hpp>

class pokoj1View : public pokoj1ViewBase
{
public:
    pokoj1View();
    virtual ~pokoj1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
    virtual void oswietleniePok1ButtonClicked();
protected:
    int counter{};
};

#endif // POKOJ1VIEW_HPP
