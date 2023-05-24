#ifndef KUCHENKAVIEW_HPP
#define KUCHENKAVIEW_HPP

#include <gui_generated/kuchenka_screen/kuchenkaViewBase.hpp>
#include <gui/kuchenka_screen/kuchenkaPresenter.hpp>

class kuchenkaView : public kuchenkaViewBase
{
public:
    kuchenkaView();
    virtual ~kuchenkaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void selectPalnik1();
    virtual void selectPalnik2();
    virtual void selectPalnik3();
    virtual void selectPalnik4();
    virtual void palnikMocUp();
    virtual void palnikMocDown();
protected:
};

#endif // KUCHENKAVIEW_HPP
