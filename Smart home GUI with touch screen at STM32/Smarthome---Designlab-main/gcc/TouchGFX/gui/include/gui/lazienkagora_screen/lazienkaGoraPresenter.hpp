#ifndef LAZIENKAGORAPRESENTER_HPP
#define LAZIENKAGORAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class lazienkaGoraView;

class lazienkaGoraPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    lazienkaGoraPresenter(lazienkaGoraView& v);

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

    virtual ~lazienkaGoraPresenter() {};
    void setTempLazGora(int temp);
    int getTempLazGora();
    void setLazGoraPodgrzewanie(bool on);
    bool getLazGoraPodgrzewanie();
    void setSauna(bool on);
    bool getSauna();

private:
    lazienkaGoraPresenter();

    lazienkaGoraView& view;
};

#endif // LAZIENKAGORAPRESENTER_HPP
