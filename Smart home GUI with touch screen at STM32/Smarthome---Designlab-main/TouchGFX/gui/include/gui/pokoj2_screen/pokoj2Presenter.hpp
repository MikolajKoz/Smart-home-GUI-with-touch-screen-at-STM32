#ifndef POKOJ2PRESENTER_HPP
#define POKOJ2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class pokoj2View;

class pokoj2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    pokoj2Presenter(pokoj2View& v);

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

    virtual ~pokoj2Presenter() {};
    void setTempPok2(int temp);
    int getTempPok2();
    void setPok2Oswietlenie(bool on);
    bool getPok2Oswietlenie();

private:
    pokoj2Presenter();

    pokoj2View& view;
};

#endif // POKOJ2PRESENTER_HPP
