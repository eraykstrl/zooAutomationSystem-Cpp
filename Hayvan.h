#ifndef HAYVAN_H
#define HAYVAN_H
#include<iostream>
#include<vector>
#include<string>
/*GENEL B�LG�LER
ERAY K�STEREL�O�LU 220707054
B�LG�SAYAR M�HEND�SL��� B�L�M� NESNEYE Y�NEL�K PROGRAMLAMA:MBM104-B
2022-2023 G�Z D�NEM� PROJE 1
DERS� VEREN ��RET�M �YES�:DEN�Z DAL
*/


using namespace std;
class Hayvan
{
public:
    string Tur;/*Buradaki atamalar�n temel amac� hayvan�n t�r,ad,ya�,renk gibi �zelliklerinin al�nmas�d�r.*/
    string Ad;
    int Yas;
    string hayvanRengi;

    Hayvan(string hayvanTuru, string Ad, int Yas) : Tur(hayvanTuru), Ad(Ad), Yas(Yas) {}

    void HayvanOzellikleri();
    void HayvanyeniOzellikleri();

};
#endif
