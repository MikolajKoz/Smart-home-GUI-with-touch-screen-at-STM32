#ifndef SALONPRESENTER_HPP
#define SALONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class salonView;

class salonPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    salonPresenter(salonView& v);

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

    virtual ~salonPresenter() {};

    void setTempSalon(int temp);
    int getTempSalon();
    void setSalonPodgrzewanie(bool on);
    bool getSalonPodgrzewanie();
    void setSalonOswietlenie(bool on);
    bool getSalonOswietlenie();

private:
    salonPresenter();

    salonView& view;
};

#endif // SALONPRESENTER_HPP
