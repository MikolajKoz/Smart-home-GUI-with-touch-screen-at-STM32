#ifndef OGRODPRESENTER_HPP
#define OGRODPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ogrodView;

class ogrodPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ogrodPresenter(ogrodView& v);

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

    virtual ~ogrodPresenter() {};

    void setTempBasen(int temp);
    int getTempBasen();
    void setOgrodPodlewanie(bool on);
    bool getOgrodPodlewanie();
    void setOgrodOswietlenie(bool on);
    bool getOgrodOswietlenie();

private:
    ogrodPresenter();

    ogrodView& view;
};

#endif // OGRODPRESENTER_HPP
