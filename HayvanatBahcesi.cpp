#include "Hayvan.h"
#include"HayvanatBahcesi.h"
#include"Aslan.h"
#include"Zebra.h"
#include"Kartal.h"
#include<iostream>
#include<vector>

/*GENEL B�LG�LER
ERAY K�STEREL�O�LU 220707054
B�LG�SAYAR M�HEND�SL��� B�L�M� NESNEYE Y�NEL�K PROGRAMLAMA :MBM104-B
2022-2023 G�Z D�NEM� PROJE 1
DERS� VEREN ��RET�M �YES�:DEN�Z DAL
*/
void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {/*hayvanEkleme fonksiyonuyla beraber Hayvan s�n�f�na belirtilen hayvan ia�ret�isiyle birlikte push.back yap�s� kullan�larak �ye ekleniyor.*/
    hayvanlar.push_back(hayvan);
}
void HayvanatBahcesi::hayvanYasGuncelle() {
    string hayvanAd�;
    cout << "D�zenlemek istedi�iniz hayvan�n ad�n� girin: ";
    cin >> hayvanAd�;/*D�zenlenmek istenen hayvan�n ismi al�narak hayvan d�zenlemnmesi yap�ld�. */

    for (Hayvan* hayvan : hayvanlar) {/*Burada Hayvan class�ndaki veriler hayvan i�aret�siyle al�narak vekt�r yard�m�yla d�zenlendi.*/
        if (hayvan->Ad == hayvanAd�) {
            hayvan->HayvanyeniOzellikleri();
            cout << "Hayvan ba�ar�yla d�zenlendi." << endl;
            return;
        }
    }
}
void HayvanatBahcesi::hayvanBesle() {/*Fonksiyonun amac� hayvanlar�n beslenmesini d�zenlemekti*/
    string tur;//Kullan�c�dan t�r se�imi al�nabilmesi i�in atand�
    cout << "-----Hayvan Besleme-----" << endl;
    cout << "Aslan,Zebra,Kartal turunden birisiniz seciniz: ";
    cin >> tur;
    if (tur == "Aslan") {/*T�r se�imi yapt�r�larak Aslan�n nas�l beslendi�i ekrana yazd�r�ld�.*/
        cout << endl;
        cout << "-----�sterseniz aslan� etle besleyebilirsiniz.----- " << endl << endl;

    }
    else if (tur == "Zebra") {//T�r se�imi sonras�nda Zebran�n nas�l beslendi�i ekrana yazd�r�ld�
        cout << endl;
        cout << "-----*�sterseniz zebray� otla besleyebilirsiniz.-----" << endl << endl;

    }
    else if (tur == "Kartal") {//T�r se�imi sonras�nda Kartal�n nas�l beslendi�i ekrana yazd�r�ld�.
        cout << endl;
        cout << "-----�sterseniz kartal� etle besleyebilirsiniz.-----" << endl << endl;
    }

}
