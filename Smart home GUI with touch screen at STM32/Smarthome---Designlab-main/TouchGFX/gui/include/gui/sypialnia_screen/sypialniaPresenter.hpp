#ifndef SYPIALNIAPRESENTER_HPP
#define SYPIALNIAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sypialniaView;

class sypialniaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sypialniaPresenter(sypialniaView& v);

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

    virtual ~sypialniaPresenter() {};
    void setTempSyp(int temp);
    int getTempSyp();
    void setSypOswietlenie(bool on);
    bool getSypOswietlenie();

private:
    sypialniaPresenter();

    sypialniaView& view;
};

#endif // SYPIALNIAPRESENTER_HPP
