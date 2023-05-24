#ifndef GARAZPRESENTER_HPP
#define GARAZPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class garazView;

class garazPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    garazPresenter(garazView& v);

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

    virtual ~garazPresenter() {};
    void setLadowanie(bool on);
    bool getLadowanie();

private:
    garazPresenter();

    garazView& view;
};

#endif // GARAZPRESENTER_HPP
