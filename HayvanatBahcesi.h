#ifndef HAYVANATBAHCES�_H
#define HAYVANATBAH�ES�_H
#include<iostream>
#include<string>
#include"Hayvan.h"
using namespace std;

/*GENEL B�LG�LER
ERAY K�STEREL�O�LU 220707054
B�LG�SAYAR M�HEND�SL��� B�L�M� NESNEYE Y�NEL�K PROGRAMLAMA : MBM104 - B
2022 - 2023 G�Z D�NEM� PROJE 1
DERS� VEREN ��RET�M �YES� : DEN�Z DAL
*/

class HayvanatBahcesi {/*Hayvanat Bahcesi s�n�f� olu�turularak hayvanlar�n �zellikleri di�er s�n�flardan �a�r�ld�*/
private:

    vector<Hayvan*>hayvanlar;/*Bu vekt�r tan�mlamas�yla Hayvan s�n�f�ndaki �zellikler HayvanatBahecesi s�n�f�nda vekt�r yaps�yla kullan�ld�.*/
public:
    Hayvan* hayvan;
    void hayvanEkle(Hayvan* hayvan);//Hayvan ekleme fonksiyon prototipi headerde fonksiyon cpp uzant�s�nda verildi.
    void hayvanlariGoster() {//Hayvanlar� g�stermek i�in fonksiyon tan�mland� 

        for (Hayvan* hayvan : hayvanlar) {/*Buradaki ama� Hayvan s�n�f�nda olan �zelliklerin hayvan i�aret�isiyle �zelliklerin al�nmas�d�r*/

            hayvan->HayvanOzellikleri();/*hayvan i�aret�isi arac�l���yla hayvan �zellikleri al�nd�*/
        }
    }
    void hayvanBesle();/*Fonksiyonun prototipi buradan tan�mlan�p cpp �zerinde fonksiyonlar eklendi.*/
    void hayvanYasGuncelle();//Hayvanlar�n �zelliklerini de�i�tirmek i�in bu fonksiyon kullan�ld� prototipi burada tan�mlan�p fonksiyonun kendisi cpp i�erisinde kodland�.
};
#endif

