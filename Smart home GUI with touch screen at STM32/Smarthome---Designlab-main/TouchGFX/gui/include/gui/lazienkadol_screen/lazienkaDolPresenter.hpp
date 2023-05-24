#ifndef LAZIENKADOLPRESENTER_HPP
#define LAZIENKADOLPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class lazienkaDolView;

class lazienkaDolPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    lazienkaDolPresenter(lazienkaDolView& v);

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

    virtual ~lazienkaDolPresenter() {};

    void setTempLazDol(int temp);
    int getTempLazDol();
    void setLazDolPodgrzewanie(bool on);
    bool getLazDolPodgrzewanie();

private:
    lazienkaDolPresenter();

    lazienkaDolView& view;
};

#endif // LAZIENKADOLPRESENTER_HPP
