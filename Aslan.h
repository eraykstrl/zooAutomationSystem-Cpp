#ifndef ASLAN_H
#define ASLAN_H
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
class Aslan : public Hayvan {/*Aslan s�n�f� Hayvan s�n�f�n�n alt s�n�f� olarak tan�mland� Hayvan s�n�f�ndaki de�i�kenler Asl s�n�f�n� da i�eriyordu*/
public:
    Aslan(string Ad, int Yas) : Hayvan("Kartal", Ad, Yas) {}//Yap� sayesinde ortak �zellikler,de�i�kenler her s�n�fta ayr� tan�mlanm�� oldu.

    void hayvanBeslenme() {
        cout << "�sterseniz aslan� etle besleyebilirsiniz. " << endl;
    }
};
#endif
