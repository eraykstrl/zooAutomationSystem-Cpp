#ifndef ASLAN_H
#define ASLAN_H
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
class Aslan : public Hayvan {/*Aslan sýnýfý Hayvan sýnýfýnýn alt sýnýfý olarak tanýmlandý Hayvan sýnýfýndaki deðiþkenler Asl sýnýfýný da içeriyordu*/
public:
    Aslan(string Ad, int Yas) : Hayvan("Kartal", Ad, Yas) {}//Yapý sayesinde ortak özellikler,deðiþkenler her sýnýfta ayrý tanýmlanmýþ oldu.

    void hayvanBeslenme() {
        cout << "Ýsterseniz aslaný etle besleyebilirsiniz. " << endl;
    }
};
#endif
