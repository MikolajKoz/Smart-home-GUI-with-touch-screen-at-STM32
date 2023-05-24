#ifndef LAZIENKAGORAVIEW_HPP
#define LAZIENKAGORAVIEW_HPP

#include <gui_generated/lazienkagora_screen/lazienkaGoraViewBase.hpp>
#include <gui/lazienkagora_screen/lazienkaGoraPresenter.hpp>

class lazienkaGoraView : public lazienkaGoraViewBase
{
public:
    lazienkaGoraView();
    virtual ~lazienkaGoraView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempWUp();
    virtual void tempWDown();
    virtual void podgrzewanieLazGoraButtonClicked();
    virtual void saunaButtonClicked();
protected:
};

#endif // LAZIENKAGORAVIEW_HPP
