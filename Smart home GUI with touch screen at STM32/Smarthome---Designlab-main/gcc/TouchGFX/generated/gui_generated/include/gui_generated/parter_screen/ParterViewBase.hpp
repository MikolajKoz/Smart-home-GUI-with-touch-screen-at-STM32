/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PARTERVIEWBASE_HPP
#define PARTERVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/parter_screen/ParterPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/Button.hpp>

class ParterViewBase : public touchgfx::View<ParterPresenter>
{
public:
    ParterViewBase();
    virtual ~ParterViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ButtonWithLabel buttonSalon;
    touchgfx::ButtonWithLabel buttonLazienka;
    touchgfx::ButtonWithLabel buttonGaraz;
    touchgfx::ButtonWithLabel buttonKuchnia;
    touchgfx::Button buttonBack;
    touchgfx::ButtonWithLabel buttonOgrod;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ParterViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // PARTERVIEWBASE_HPP
