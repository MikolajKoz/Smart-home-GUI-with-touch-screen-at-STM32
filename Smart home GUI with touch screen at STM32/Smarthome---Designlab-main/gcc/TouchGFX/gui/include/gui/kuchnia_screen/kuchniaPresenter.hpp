#ifndef KUCHNIAPRESENTER_HPP
#define KUCHNIAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class kuchniaView;

class kuchniaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    kuchniaPresenter(kuchniaView& v);

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

    virtual ~kuchniaPresenter() {};

    void setTempKuchnia(int temp);
    int getTempKuchnia();
    void setKuchniaPodgrzewanie(bool on);
    bool getKuchniaPodgrzewanie();
    void setKuchniaOswietlenie(bool on);
    bool getKuchniaOswietlenie();
    void setKuchniaSzafka(bool on);
    bool getKuchniaSzafka();

private:
    kuchniaPresenter();

    kuchniaView& view;
};

#endif // KUCHNIAPRESENTER_HPP
