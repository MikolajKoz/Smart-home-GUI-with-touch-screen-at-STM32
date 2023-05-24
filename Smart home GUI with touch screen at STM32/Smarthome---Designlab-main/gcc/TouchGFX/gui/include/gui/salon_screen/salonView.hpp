#ifndef SALONVIEW_HPP
#define SALONVIEW_HPP

#include <gui_generated/salon_screen/salonViewBase.hpp>
#include <gui/salon_screen/salonPresenter.hpp>

class salonView : public salonViewBase
{
public:
    salonView();
    virtual ~salonView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
    virtual void podgrzewanieSalonButtonClicked();
    virtual void oswietlenieSalonButtonClicked();
protected:

};

#endif // SALONVIEW_HPP
