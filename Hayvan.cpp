#include"Hayvan.h"
#include<iostream>
#include<string>
using namespace std;

void Hayvan::HayvanyeniOzellikleri() {
    cout << "Hayvan�n Yeni Ad�: ";/*Hayvanlar� d�zenleme se�ene�inden sonra hayvanlar�n yeni �zelliklerini yazd�rmak i�in kullan�ld� */
    cin >> Ad;
    cout << endl;
    cout << "Hayvan�n Yeni Ya��: ";
    cin >> Yas;
    cout << "Hayvan�n Yeni Rengi: ";
    cin >> hayvanRengi;
}
void Hayvan::HayvanOzellikleri() {
    cout << "Hayvan�n T�r�: " << Tur << endl;/*Al�nan �zelliklere g�re hayvan�n bilgileri yazd�r�ld�.*/
    cout << "Hayvan�n Ad�: " << Ad << endl;
    cout << "Hayvan�n Ya��: " << Yas << endl << endl;

}
