#ifndef KARTAL_H
#define KARTAL_H
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


class Kartal : public Hayvan {
public:
    Kartal(string Ad, int Yas) : Hayvan("Kartal", Ad, Yas) {}/*Ayn� �ekilde atamalar ve yap�lar Kartal s�n�f�nda da kullan�larak Hayvan s�n�f��ndan al�nan t�m �zellikler bu alt s�n�flarda da ge�erli oldu.*/
    void hayvanBeslenme() {
        cout << "�sterseniz kartal� etle besleyebilirsiniz." << endl << endl;

    }
};
#endif
