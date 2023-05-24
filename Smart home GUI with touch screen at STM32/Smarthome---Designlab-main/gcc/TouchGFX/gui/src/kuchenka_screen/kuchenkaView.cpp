#include <gui/kuchenka_screen/kuchenkaView.hpp>

kuchenkaView::kuchenkaView()
{

}

void kuchenkaView::setupScreen()
{
    kuchenkaViewBase::setupScreen();

    if (!presenter->getStatePalnik1() && !presenter->getStatePalnik2() && !presenter->getStatePalnik3()&& !presenter->getStatePalnik4())
    { 
        Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", 0);
        mocPalnika.resizeToCurrentText();
    }
    else if (presenter->getStatePalnik1())
    {
        Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik1());
        mocPalnika.resizeToCurrentText();
    }

    else if (presenter->getStatePalnik2())
    {
        Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik2());
        mocPalnika.resizeToCurrentText();
    }

    else if (presenter->getStatePalnik3())
    {
        Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik3());
        mocPalnika.resizeToCurrentText();
    }

    else if (presenter->getStatePalnik4())
    {
        Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik4());
        mocPalnika.resizeToCurrentText();
    }
   

    if (presenter->getStatePalnik1())
    {
        palnik1.forceState(true);
        palnik1.invalidate();
    }

    else
    {
        palnik1.forceState(false);
        palnik1.invalidate();
    }

    if (presenter->getStatePalnik2())
    {
        palnik2.forceState(true);
        palnik2.invalidate();
    }

    else
    {
        palnik2.forceState(false);
        palnik2.invalidate();
    }

    if (presenter->getStatePalnik3())
    {
        palnik3.forceState(true);
        palnik3.invalidate();
    }

    else
    {
        palnik3.forceState(false);
        palnik3.invalidate();
    }

    if (presenter->getStatePalnik4())
    {
        palnik4.forceState(true);
        palnik4.invalidate();
    }

    else
    {
        palnik4.forceState(false);
        palnik4.invalidate();
    }
}

void kuchenkaView::tearDownScreen()
{
    kuchenkaViewBase::tearDownScreen();
}

void kuchenkaView::palnikMocUp()
{
    if (presenter->getStatePalnik1())
    {
        int moc = presenter->getMocPalnik1();
        if (moc < 9)
        {
            moc++;
            presenter->setMocPalnik1(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }

    else if (presenter->getStatePalnik2())
    {
        int moc = presenter->getMocPalnik2();
        if (moc < 9)
        {
            moc++;
            presenter->setMocPalnik2(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }

    else if (presenter->getStatePalnik3())
    {
        int moc = presenter->getMocPalnik3();
        if (moc < 9)
        {
            moc++;
            presenter->setMocPalnik3(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }

    else if (presenter->getStatePalnik4())
    {
        int moc = presenter->getMocPalnik4();
        if (moc < 9)
        {
            moc++;
            presenter->setMocPalnik4(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }   
}

void kuchenkaView::palnikMocDown()
{
    if (presenter->getStatePalnik1())
    { 
        int moc = presenter->getMocPalnik1();
        if (moc <= 9 && moc > 0)
        {
            moc--;
            presenter->setMocPalnik1(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }

    else if (presenter->getStatePalnik2())
    {
        int moc = presenter->getMocPalnik2();
        if (moc <= 9 && moc > 0)
        {
            moc--;
            presenter->setMocPalnik2(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }

    else if (presenter->getStatePalnik3())
    {
        int moc = presenter->getMocPalnik3();
        if (moc <= 9 && moc > 0)
        {
            moc--;
            presenter->setMocPalnik3(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }

    else if (presenter->getStatePalnik4())
    {
        int moc = presenter->getMocPalnik4();
        if (moc <= 9 && moc > 0)
        {
            moc--;
            presenter->setMocPalnik4(moc);
            Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", moc);
            mocPalnika.invalidate();
        }
    }
}

void kuchenkaView::selectPalnik1()
{

    Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik1());
    mocPalnika.resizeToCurrentText();

    if (palnik1.getState())
    {
        presenter->setStatePalnik1(true);
    }
    else
    {
        presenter->setStatePalnik1(false);
    }


}

void kuchenkaView::selectPalnik2()
{

    Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik2());
    mocPalnika.resizeToCurrentText();
    if (palnik2.getState())
    {
        presenter->setStatePalnik2(true);
    }
    else
    {
        presenter->setStatePalnik2(false);
    }
}

void kuchenkaView::selectPalnik3()
{

    Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik3());
    mocPalnika.resizeToCurrentText();

    if (palnik3.getState())
    {
        presenter->setStatePalnik3(true);
    }
    else
    {
        presenter->setStatePalnik3(false);
    }
}

void kuchenkaView::selectPalnik4()
{

    Unicode::snprintf(mocPalnikaBuffer, MOCPALNIKA_SIZE, "%d", presenter->getStatePalnik4());
    mocPalnika.resizeToCurrentText();

    if (palnik4.getState())
    {
        presenter->setStatePalnik4(true);
    }
    else
    {
        presenter->setStatePalnik4(false);
    }
}