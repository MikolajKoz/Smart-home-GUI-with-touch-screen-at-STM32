#ifndef KUCHENKAPRESENTER_HPP
#define KUCHENKAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class kuchenkaView;

class kuchenkaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    kuchenkaPresenter(kuchenkaView& v);

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

    virtual ~kuchenkaPresenter() {};

    void setMocPalnik1(int moc);
    int getMocPalnik1();
    void setMocPalnik2(int moc);
    int getMocPalnik2();
    void setMocPalnik3(int moc);
    int getMocPalnik3();
    void setMocPalnik4(int moc);
    int getMocPalnik4();

    void setStatePalnik1(bool state);
    bool getStatePalnik1();
    void setStatePalnik2(bool state);
    bool getStatePalnik2();
    void setStatePalnik3(bool state);
    bool getStatePalnik3();
    void setStatePalnik4(bool state);
    bool getStatePalnik4();


private:
    kuchenkaPresenter();

    kuchenkaView& view;
};

#endif // KUCHENKAPRESENTER_HPP
