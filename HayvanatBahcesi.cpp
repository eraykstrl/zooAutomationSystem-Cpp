#include "Hayvan.h"
#include"HayvanatBahcesi.h"
#include"Aslan.h"
#include"Zebra.h"
#include"Kartal.h"
#include<iostream>
#include<vector>

/*GENEL BÝLGÝLER
ERAY KÖSTERELÝOÐLU 220707054
BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ NESNEYE YÖNELÝK PROGRAMLAMA :MBM104-B
2022-2023 GÜZ DÖNEMÝ PROJE 1
DERSÝ VEREN ÖÐRETÝM ÜYESÝ:DENÝZ DAL
*/
void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {/*hayvanEkleme fonksiyonuyla beraber Hayvan sýnýfýna belirtilen hayvan iaþretçisiyle birlikte push.back yapýsý kullanýlarak üye ekleniyor.*/
    hayvanlar.push_back(hayvan);
}
void HayvanatBahcesi::hayvanYasGuncelle() {
    string hayvanAdý;
    cout << "Düzenlemek istediðiniz hayvanýn adýný girin: ";
    cin >> hayvanAdý;/*Düzenlenmek istenen hayvanýn ismi alýnarak hayvan düzenlemnmesi yapýldý. */

    for (Hayvan* hayvan : hayvanlar) {/*Burada Hayvan classýndaki veriler hayvan iþaretçsiyle alýnarak vektör yardýmýyla düzenlendi.*/
        if (hayvan->Ad == hayvanAdý) {
            hayvan->HayvanyeniOzellikleri();
            cout << "Hayvan baþarýyla düzenlendi." << endl;
            return;
        }
    }
}
void HayvanatBahcesi::hayvanBesle() {/*Fonksiyonun amacý hayvanlarýn beslenmesini düzenlemekti*/
    string tur;//Kullanýcýdan tür seçimi alýnabilmesi için atandý
    cout << "-----Hayvan Besleme-----" << endl;
    cout << "Aslan,Zebra,Kartal turunden birisiniz seciniz: ";
    cin >> tur;
    if (tur == "Aslan") {/*Tür seçimi yaptýrýlarak Aslanýn nasýl beslendiði ekrana yazdýrýldý.*/
        cout << endl;
        cout << "-----Ýsterseniz aslaný etle besleyebilirsiniz.----- " << endl << endl;

    }
    else if (tur == "Zebra") {//Tür seçimi sonrasýnda Zebranýn nasýl beslendiði ekrana yazdýrýldý
        cout << endl;
        cout << "-----*Ýsterseniz zebrayý otla besleyebilirsiniz.-----" << endl << endl;

    }
    else if (tur == "Kartal") {//Tür seçimi sonrasýnda Kartalýn nasýl beslendiði ekrana yazdýrýldý.
        cout << endl;
        cout << "-----Ýsterseniz kartalý etle besleyebilirsiniz.-----" << endl << endl;
    }

}
