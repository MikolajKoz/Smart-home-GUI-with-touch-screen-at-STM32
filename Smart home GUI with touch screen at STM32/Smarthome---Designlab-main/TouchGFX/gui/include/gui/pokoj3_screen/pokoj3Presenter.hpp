#ifndef POKOJ3PRESENTER_HPP
#define POKOJ3PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class pokoj3View;

class pokoj3Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    pokoj3Presenter(pokoj3View& v);

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

    virtual ~pokoj3Presenter() {};
    void setTempPok3(int temp);
    int getTempPok3();
    void setPok3Oswietlenie(bool on);
    bool getPok3Oswietlenie();

private:
    pokoj3Presenter();

    pokoj3View& view;
};

#endif // POKOJ3PRESENTER_HPP
