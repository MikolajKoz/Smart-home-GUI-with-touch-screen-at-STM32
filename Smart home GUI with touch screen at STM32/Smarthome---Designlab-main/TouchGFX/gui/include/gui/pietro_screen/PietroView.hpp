#ifndef PIETROVIEW_HPP
#define PIETROVIEW_HPP

#include <gui_generated/pietro_screen/PietroViewBase.hpp>
#include <gui/pietro_screen/PietroPresenter.hpp>

class PietroView : public PietroViewBase
{
public:
    PietroView();
    virtual ~PietroView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PIETROVIEW_HPP
