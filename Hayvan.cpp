#include"Hayvan.h"
#include<iostream>
#include<string>
using namespace std;

void Hayvan::HayvanyeniOzellikleri() {
    cout << "Hayvanýn Yeni Adý: ";/*Hayvanlarý düzenleme seçeneðinden sonra hayvanlarýn yeni özelliklerini yazdýrmak için kullanýldý */
    cin >> Ad;
    cout << endl;
    cout << "Hayvanýn Yeni Yaþý: ";
    cin >> Yas;
    cout << "Hayvanýn Yeni Rengi: ";
    cin >> hayvanRengi;
}
void Hayvan::HayvanOzellikleri() {
    cout << "Hayvanýn Türü: " << Tur << endl;/*Alýnan özelliklere göre hayvanýn bilgileri yazdýrýldý.*/
    cout << "Hayvanýn Adý: " << Ad << endl;
    cout << "Hayvanýn Yaþý: " << Yas << endl << endl;

}
