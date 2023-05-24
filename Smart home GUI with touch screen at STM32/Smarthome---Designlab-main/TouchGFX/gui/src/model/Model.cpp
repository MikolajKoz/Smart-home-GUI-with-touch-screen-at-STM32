#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <random>

std::random_device rd{};
std::mt19937 engine{ rd() };
std::uniform_real_distribution <double> dist{ 0.0, 15.0 };
std::uniform_real_distribution <double> distB{ 0.0, 30.0 };

Model::Model() :
	modelListener(0),
	tempKuchnia(15 + (int)dist(engine)),
	tempSalon(15 + (int)dist(engine)),
	mocPalnik1(0),
	mocPalnik2(0),
	mocPalnik3(0),
	mocPalnik4(0),
	tempBasen(15 + (int)distB(engine)),
	tempLazDol(15 + (int)dist(engine)),
	tempLazGora(15 + (int)distB(engine)),
	tempPok1(15 + (int)dist(engine)),
	tempPok2(15 + (int)dist(engine)),
	tempPok3(15 + (int)dist(engine)),
	tempSyp(15 + (int)dist(engine))
{
	
}

void Model::tick()
{
	
}
//kuchnia
void Model::setTempKuchnia(int temp)
{
	tempKuchnia = temp;
}

int Model::getTempKuchnia()
{
	return tempKuchnia;
}

void Model::setKuchniaPodgrzewanie(bool on)
{
	podgrzewanieKuchnia = on;
}

bool Model::getKuchniaPodgrzewanie()
{
	return podgrzewanieKuchnia;
}
void Model::setKuchniaOswietlenie(bool on)
{
	oswietlenieKuchnia = on;
}
bool Model::getKuchniaOswietlenie()
{
	return oswietlenieKuchnia;
}
void Model::setKuchniaSzafka(bool on)
{
	szafkaKuchnia = on;
}
bool Model::getKuchniaSzafka()
{
	return szafkaKuchnia;
}


//kuchenka
void Model::setMocPalnik1(int moc)
{
	mocPalnik1 = moc;
}

int Model::getMocPalnik1()
{
	return mocPalnik1;
}

void Model::setMocPalnik2(int moc)
{
	mocPalnik2 = moc;
}

int Model::getMocPalnik2()
{
	return mocPalnik2;
}

void Model::setMocPalnik3(int moc)
{
	mocPalnik3 = moc;
}

int Model::getMocPalnik3()
{
	return mocPalnik3;
}

void Model::setMocPalnik4(int moc)
{
	mocPalnik4 = moc;
}

int Model::getMocPalnik4()
{
	return mocPalnik4;
}

void Model::setStatePalnik1(bool state)
{
	statePalnik1 = state;
}

void Model::setStatePalnik2(bool state)
{
	statePalnik2 = state;
}

void Model::setStatePalnik3(bool state)
{
	statePalnik3 = state;
}

void Model::setStatePalnik4(bool state)
{
	statePalnik4 = state;
}

bool Model::getStatePalnik1()
{
	return statePalnik1;
}

bool Model::getStatePalnik2()
{
	return statePalnik2;
}

bool Model::getStatePalnik3()
{
	return statePalnik3;
}

bool Model::getStatePalnik4()
{
	return statePalnik4;
}

// SALON
void Model::setTempSalon(int temp)
{
	tempSalon = temp;
}
int Model::getTempSalon()
{
	return tempSalon;
}
void Model::setSalonPodgrzewanie(bool on)
{
	podgrzewanieSalon = on;
}
bool Model::getSalonPodgrzewanie()
{
	return podgrzewanieSalon;
}
void Model::setSalonOswietlenie(bool on)
{
	oswietlenieSalon = on;
}
bool Model::getSalonOswietlenie()
{
	return oswietlenieSalon;
}

//Ogrod
void Model::setTempBasen(int temp)
{
	tempBasen = temp;
}
int Model::getTempBasen()
{
	return tempBasen;
}
void Model::setOgrodPodlewanie(bool on)
{
	podlewanie = on;
}
bool Model::getOgrodPodlewanie()
{
	return podlewanie;
}
void Model::setOgrodOswietlenie(bool on)
{
	oswietlenieOgrod = on;
}
bool Model::getOgrodOswietlenie()
{
	return oswietlenieOgrod;
}

//garaz
void Model::setLadowanie(bool on)
{
	ladowanie = on;
}
bool Model::getLadowanie()
{
	return ladowanie;
}

//lazienka dol
void Model::setTempLazDol(int temp)
{
	tempLazDol = temp;
}
int Model::getTempLazDol()
{
	return tempLazDol;
}
void Model::setLazDolPodgrzewanie(bool on)
{
	podgrzeanieLazDol = on;
}
bool Model::getLazDolPodgrzewanie()
{
	return podgrzeanieLazDol;
}

//lazienka gora
void Model::setTempLazGora(int temp)
{
	tempLazGora = temp;
}
int Model::getTempLazGora()
{
	return tempLazGora;
}
void Model::setLazGoraPodgrzewanie(bool on)
{
	podgrzewanieLazGora = on;
}
bool Model::getLazGoraPodgrzewanie()
{
	return podgrzewanieLazGora;
}
void Model::setSauna(bool on)
{
	sauna = on;
}
bool Model::getSauna()
{
	return sauna;
}

//pokoj 1
void Model::setTempPok1(int temp)
{
	tempPok1 = temp;
}
int Model::getTempPok1()
{
	return tempPok1;
}
void Model::setPok1Oswietlenie(bool on)
{
	oswietleniePok1 = on;
}
bool Model::getPok1Oswietlenie()
{
	return oswietleniePok1;
}

//pokoj 2
void Model::setTempPok2(int temp)
{
	tempPok2 = temp;
}
int Model::getTempPok2()
{
	return tempPok2;
}
void Model::setPok2Oswietlenie(bool on)
{
	oswietleniePok2 = on;
}
bool Model::getPok2Oswietlenie()
{
	return oswietleniePok2;
}

//pokoj 3
void Model::setTempPok3(int temp)
{
	tempPok3= temp;
}
int Model::getTempPok3()
{
	return tempPok3;
}
void Model::setPok3Oswietlenie(bool on)
{
	oswietleniePok3 = on;
}
bool Model::getPok3Oswietlenie()
{
	return oswietleniePok3;
}


//sypialnia
void Model::setTempSyp(int temp)
{
	tempSyp = temp;
}
int Model::getTempSyp()
{
	return tempSyp;
}
void Model::setSypOswietlenie(bool on)
{
	oswietlenieSyp = on;
}
bool Model::getSypOswietlenie()
{
	return oswietlenieSyp;
}
