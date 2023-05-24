#ifndef KUCHNIAVIEW_HPP
#define KUCHNIAVIEW_HPP

#include <gui_generated/kuchnia_screen/kuchniaViewBase.hpp>
#include <gui/kuchnia_screen/kuchniaPresenter.hpp>

class kuchniaView : public kuchniaViewBase
{
public:
    kuchniaView();
    virtual ~kuchniaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
    virtual void podgrzewanieKuchniaButtonClicked();
    virtual void oswietlenieKuchniaButtonClicked();
    virtual void szafkaKuchniaButtonClicked();
protected:

};

#endif // KUCHNIAVIEW_HPP
