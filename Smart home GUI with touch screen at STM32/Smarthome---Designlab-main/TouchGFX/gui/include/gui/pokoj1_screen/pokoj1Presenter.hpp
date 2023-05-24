#ifndef POKOJ1PRESENTER_HPP
#define POKOJ1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class pokoj1View;

class pokoj1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    pokoj1Presenter(pokoj1View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~pokoj1Presenter() {};
    void setTempPok1(int temp);
    int getTempPok1();
    void setPok1Oswietlenie(bool on);
    bool getPok1Oswietlenie();

private:
    pokoj1Presenter();

    pokoj1View& view;
};

#endif // POKOJ1PRESENTER_HPP
