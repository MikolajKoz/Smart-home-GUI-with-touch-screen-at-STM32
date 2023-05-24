#include <gui/kuchenka_screen/kuchenkaView.hpp>
#include <gui/kuchenka_screen/kuchenkaPresenter.hpp>

kuchenkaPresenter::kuchenkaPresenter(kuchenkaView& v)
    : view(v)
{

}

void kuchenkaPresenter::activate()
{

}

void kuchenkaPresenter::deactivate()
{

}

void kuchenkaPresenter::setMocPalnik1(int moc)
{
	model->setMocPalnik1(moc);
}

int kuchenkaPresenter::getMocPalnik1()
{
	return model->getMocPalnik1();
}

void kuchenkaPresenter::setMocPalnik2(int moc)
{
	model->setMocPalnik2(moc);
}

int kuchenkaPresenter::getMocPalnik2()
{
	return model->getMocPalnik2();
}

void kuchenkaPresenter::setMocPalnik3(int moc)
{
	model->setMocPalnik3(moc);
}

int kuchenkaPresenter::getMocPalnik3()
{
	return model->getMocPalnik3();
}

void kuchenkaPresenter::setMocPalnik4(int moc)
{
	model->setMocPalnik4(moc);
}

int kuchenkaPresenter::getMocPalnik4()
{
	return model->getMocPalnik4();
}

void kuchenkaPresenter::setStatePalnik1(bool state)
{
	model->setStatePalnik1(state);
}

bool kuchenkaPresenter::getStatePalnik1()
{
	return model->getStatePalnik1();
}

void kuchenkaPresenter::setStatePalnik2(bool state)
{
	model->setStatePalnik2(state);
}

bool kuchenkaPresenter::getStatePalnik2()
{
	return model->getStatePalnik2();
}

void kuchenkaPresenter::setStatePalnik3(bool state)
{
	model->setStatePalnik3(state);
}

bool kuchenkaPresenter::getStatePalnik3()
{
	return model->getStatePalnik3();
}

void kuchenkaPresenter::setStatePalnik4(bool state)
{
	model->setStatePalnik4(state);
}

bool kuchenkaPresenter::getStatePalnik4()
{
	return model->getStatePalnik4();
}
