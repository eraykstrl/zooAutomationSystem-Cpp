#ifndef HAYVANATBAHCESÝ_H
#define HAYVANATBAHÇESÝ_H
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

class HayvanatBahcesi {/*Hayvanat Bahcesi sýnýfý oluþturularak hayvanlarýn özellikleri diðer sýnýflardan çaðrýldý*/
private:

    vector<Hayvan*>hayvanlar;/*Bu vektör tanýmlamasýyla Hayvan sýnýfýndaki özellikler HayvanatBahecesi sýnýfýnda vektör yapsýyla kullanýldý.*/
public:
    Hayvan* hayvan;
    void hayvanEkle(Hayvan* hayvan);//Hayvan ekleme fonksiyon prototipi headerde fonksiyon cpp uzantýsýnda verildi.
    void hayvanlariGoster() {//Hayvanlarý göstermek için fonksiyon tanýmlandý 

        for (Hayvan* hayvan : hayvanlar) {/*Buradaki amaç Hayvan sýnýfýnda olan özelliklerin hayvan iþaretçisiyle özelliklerin alýnmasýdýr*/

            hayvan->HayvanOzellikleri();/*hayvan iþaretçisi aracýlýðýyla hayvan özellikleri alýndý*/
        }
    }
    void hayvanBesle();/*Fonksiyonun prototipi buradan tanýmlanýp cpp üzerinde fonksiyonlar eklendi.*/
    void hayvanYasGuncelle();//Hayvanlarýn özelliklerini deðiþtirmek için bu fonksiyon kullanýldý prototipi burada tanýmlanýp fonksiyonun kendisi cpp içerisinde kodlandý.
};
#endif

