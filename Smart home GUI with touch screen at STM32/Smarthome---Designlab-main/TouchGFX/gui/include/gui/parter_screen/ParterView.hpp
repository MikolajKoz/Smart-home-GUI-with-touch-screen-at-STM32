#ifndef PARTERVIEW_HPP
#define PARTERVIEW_HPP

#include <gui_generated/parter_screen/ParterViewBase.hpp>
#include <gui/parter_screen/ParterPresenter.hpp>

class ParterView : public ParterViewBase
{
public:
    ParterView();
    virtual ~ParterView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PARTERVIEW_HPP
