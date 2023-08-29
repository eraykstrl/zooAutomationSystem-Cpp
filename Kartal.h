#ifndef KARTAL_H
#define KARTAL_H
#include<iostream>
#include<string>
#include"Hayvan.h"
using namespace std;
/*GENEL BÝLGÝLER
ERAY KÖSTERELÝOÐLU 220707054
BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ NESNEYE YÖNELÝK PROGRAMLAMA : MBM104 - B
2022 - 2023 GÜZ DÖNEMÝ PROJE 1
DERSÝ VEREN ÖÐRETÝM ÜYESÝ : DENÝZ DAL
*/


class Kartal : public Hayvan {
public:
    Kartal(string Ad, int Yas) : Hayvan("Kartal", Ad, Yas) {}/*Ayný þekilde atamalar ve yapýlar Kartal sýnýfýnda da kullanýlarak Hayvan sýnýfýýndan alýnan tüm özellikler bu alt sýnýflarda da geçerli oldu.*/
    void hayvanBeslenme() {
        cout << "Ýsterseniz kartalý etle besleyebilirsiniz." << endl << endl;

    }
};
#endif
