#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    // get/set kuchnia
    void setTempKuchnia(int temp); 
    int getTempKuchnia();

    void setKuchniaPodgrzewanie(bool on);
    bool getKuchniaPodgrzewanie();

    void setKuchniaOswietlenie(bool on);
    bool getKuchniaOswietlenie();

    void setKuchniaSzafka(bool on);
    bool getKuchniaSzafka();

    // kuchenka
    void setMocPalnik1(int moc);
    int getMocPalnik1();
    void setMocPalnik2(int moc);
    int getMocPalnik2();
    void setMocPalnik3(int moc);
    int getMocPalnik3();
    void setMocPalnik4(int moc);
    int getMocPalnik4();

    void setStatePalnik1(bool on);
    bool getStatePalnik1();
    void setStatePalnik2(bool on);
    bool getStatePalnik2();
    void setStatePalnik3(bool on);
    bool getStatePalnik3();
    void setStatePalnik4(bool on);
    bool getStatePalnik4();

    //salon
    void setTempSalon(int temp);
    int getTempSalon();
    void setSalonPodgrzewanie(bool on);
    bool getSalonPodgrzewanie();
    void setSalonOswietlenie(bool on);
    bool getSalonOswietlenie();

    //ogrod
    void setTempBasen(int temp);
    int getTempBasen();
    void setOgrodPodlewanie(bool on);
    bool getOgrodPodlewanie();
    void setOgrodOswietlenie(bool on);
    bool getOgrodOswietlenie();

    //garaz
    void setLadowanie(bool on);
    bool getLadowanie();

    //lazienkaDol
    void setTempLazDol(int temp);
    int getTempLazDol();
    void setLazDolPodgrzewanie(bool on);
    bool getLazDolPodgrzewanie();

    //lazienkaGora
    void setTempLazGora(int temp);
    int getTempLazGora();
    void setLazGoraPodgrzewanie(bool on);
    bool getLazGoraPodgrzewanie();
    void setSauna(bool on);
    bool getSauna();
   
    //pokoj 1
    void setTempPok1(int temp);
    int getTempPok1();
    void setPok1Oswietlenie(bool on);
    bool getPok1Oswietlenie();

    //pokoj 2
    void setTempPok2(int temp);
    int getTempPok2();
    void setPok2Oswietlenie(bool on);
    bool getPok2Oswietlenie();

    //pokoj 3
    void setTempPok3(int temp);
    int getTempPok3();
    void setPok3Oswietlenie(bool on);
    bool getPok3Oswietlenie();

    //sypialnia
    void setTempSyp(int temp);
    int getTempSyp();
    void setSypOswietlenie(bool on);
    bool getSypOswietlenie();

protected:
    ModelListener* modelListener;
    //kuchnia
    int tempKuchnia;
    bool podgrzewanieKuchnia, oswietlenieKuchnia, szafkaKuchnia;
    //salon
    int tempSalon;
    bool podgrzewanieSalon;
    bool oswietlenieSalon;
    //kuchenka
    int mocPalnik1, mocPalnik2, mocPalnik3, mocPalnik4;
    bool statePalnik1, statePalnik2, statePalnik3, statePalnik4;
    //ogrod
    int tempBasen;
    bool podlewanie, oswietlenieOgrod;
    //garaz
    bool ladowanie;
    //lazienkaDol
    int tempLazDol;
    bool podgrzewanieLazDol;
    //lazienkaGora
    int tempLazGora;
    bool podgrzewanieLazGora;
    bool sauna;
    //pokoj1
    int tempPok1;
    bool oswietleniePok1;
    //pokoj2
    int tempPok2;
    bool oswietleniePok2;
    //pokoj3
    int tempPok3;
    bool oswietleniePok3;
    //sypialnia
    int tempSyp;
    bool oswietlenieSyp;
};

#endif // MODEL_HPP
