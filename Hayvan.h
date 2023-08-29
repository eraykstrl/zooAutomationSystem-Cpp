#ifndef HAYVAN_H
#define HAYVAN_H
#include<iostream>
#include<vector>
#include<string>
/*GENEL BÝLGÝLER
ERAY KÖSTERELÝOÐLU 220707054
BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ NESNEYE YÖNELÝK PROGRAMLAMA:MBM104-B
2022-2023 GÜZ DÖNEMÝ PROJE 1
DERSÝ VEREN ÖÐRETÝM ÜYESÝ:DENÝZ DAL
*/


using namespace std;
class Hayvan
{
public:
    string Tur;/*Buradaki atamalarýn temel amacý hayvanýn tür,ad,yaþ,renk gibi özelliklerinin alýnmasýdýr.*/
    string Ad;
    int Yas;
    string hayvanRengi;

    Hayvan(string hayvanTuru, string Ad, int Yas) : Tur(hayvanTuru), Ad(Ad), Yas(Yas) {}

    void HayvanOzellikleri();
    void HayvanyeniOzellikleri();

};
#endif
