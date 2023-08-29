#ifndef ZEBRA_H
#define ZEBRA_H
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
class Zebra : public Hayvan {
public:
    Zebra(string Ad, int Yas) : Hayvan("Kartal", Ad, Yas) {}//Yapý sayesinde ortak özellikler,deðiþkenler her sýnýfta ayrý tanýmlanmýþ oldu.
    void hayvanBeslenme() {
        cout << "Ýsterseniz zebrayý otla besleyebilirsiniz" << endl;
    }
};
#endif

