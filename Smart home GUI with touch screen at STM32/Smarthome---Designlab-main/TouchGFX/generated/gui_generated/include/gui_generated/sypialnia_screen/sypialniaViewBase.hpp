/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SYPIALNIAVIEWBASE_HPP
#define SYPIALNIAVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/sypialnia_screen/sypialniaPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class sypialniaViewBase : public touchgfx::View<sypialniaPresenter>
{
public:
    sypialniaViewBase();
    virtual ~sypialniaViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void tempUp()
    {
        // Override and implement this function in sypialnia
    }

    virtual void tempDown()
    {
        // Override and implement this function in sypialnia
    }

    virtual void oswietlenieSypButtonClicked()
    {
        // Override and implement this function in sypialnia
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::Button goBack;
    touchgfx::ToggleButton lamp;
    touchgfx::Image temp;
    touchgfx::Button down;
    touchgfx::Button up;
    touchgfx::TextAreaWithOneWildcard textCounter;
    touchgfx::Button upR;
    touchgfx::Button downR;
    touchgfx::Image rollerBinds;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTCOUNTER_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textCounterBuffer[TEXTCOUNTER_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<sypialniaViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SYPIALNIAVIEWBASE_HPP
