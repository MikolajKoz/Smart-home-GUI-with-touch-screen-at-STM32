#ifndef LAZIENKADOLVIEW_HPP
#define LAZIENKADOLVIEW_HPP

#include <gui_generated/lazienkadol_screen/lazienkaDolViewBase.hpp>
#include <gui/lazienkadol_screen/lazienkaDolPresenter.hpp>

class lazienkaDolView : public lazienkaDolViewBase
{
public:
    lazienkaDolView();
    virtual ~lazienkaDolView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
    virtual void podgrzewanieLazDolButtonClicked();
protected:
};

#endif // LAZIENKADOLVIEW_HPP
