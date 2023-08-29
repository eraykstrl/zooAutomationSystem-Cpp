#include<iostream>
#include<vector>
#include"Hayvan.h"
#include"Aslan.h"
#include"Zebra.h"
#include"Kartal.h"
#include"HayvanatBahcesi.h"
#include<clocale>//Türkçe karakter kullanımı için include edildi

/*GENEL BİLGİLER
ERAY KÖSTERELİOĞLU 220707054
BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ NESNEYE YÖNELİK PROGRAMLAMA:MBM104-B
2022-2023 GÜZ DÖNEMİ PROJE 1
DERSİ VEREN ÖĞRETİM ÜYESİ:DENİZ DAL
*/
int main() {
    string Tur;//Hayvan türünü belirtmek için değişken atandı.
    string Ad;//Hayvan adını belirtmek için değişken atandı.
    int Yas = 0;//Hayvan yaşını belirtmek için değişken atandı.
    string hayvanRengi;//Hayvan rengini belirtmek için değişken atandı
    Hayvan* hayvan = 0;//Hayvan sınıfının içindeki fonksiyonları alabilmek için atandı.
    string hayvanAdı2;//Hayvan adını belirtmek için değişken atandı.
    int hayvanYası2;//Hayvan yaşını belirtmek için değişken atandı.
    string hayvanRengi2; // Hayvan rengini belirtmek için değişken atandı

    int secim;//Kullanıcıdan seçim alabilmek için alındı
    setlocale(LC_ALL, "Turkish");
    HayvanatBahcesi hayvanatBahcesi1;
    Hayvan* aslan1 = 0;/*Buradaki atamaların amacı eklenecek olan yeni hayvan üyelerinin hayvan sınıfında alınabilmesidir*/
    Hayvan* aslan2 = 0;
    Hayvan* zebra1 = 0;
    Hayvan* zebra2 = 0;
    Hayvan* kartal1 = 0;
    Hayvan* kartal2 = 0;
    while (1) {/*While yapısının bu şekilde kullanılmasının sebebi her yanlış seçimde tekrar seçim yaptırmaktır*/
        cout << "----- Hayvanat Bahçesi Yönetim Sistemi -----" << endl;/*Kullanıcı arayüzü bu şekilde oluşturuldu*/
        cout << "1. Hayvan Ekle" << endl;
        cout << "2. Hayvanları Göster" << "              Eray KÖSTERELİOĞLU 220707054  Dersin Öğretim Görevlisi : Deniz DAL" << endl;
        cout << "3. Hayvan Besle" << endl;
        cout << "4. Hayvan Düzenle" << endl;
        cout << "5. Çıkış" << endl;
        cout << "Seçiminizi yapın: ";
        cin >> secim;

        if (secim == 1) { /*İf yapısıyla kullanıcının tercihleri alındı */
            cout << "-----HAYVAN EKLEME-----" << endl;
            cout << "Seçmek istediğiniz hayvan türünü seçiniz (Aslan,Zebra,Kartal): ";
            cin >> Tur;//Kullanıcıdan eklemek istediği hayvan türü alındı

            cout << "Hayvan Adı: ";/*Buradaki amaç kullanıcıdan eklemesi istediği hayvanın özelliklerinin alınmasıdır.*/
            cin >> Ad;
            cout << "Hayvan Yası: ";
            cin >> Yas;
            cout << "Hayvan Rengi: ";
            cin >> hayvanRengi;
            cout << endl;

            cout << "Hayvan Adı: ";
            cin >> hayvanAdı2;
            cout << "Hayvan Yası: ";
            cin >> hayvanYası2;
            cout << "Hayvan Rengi: ";
            cin >> hayvanRengi2;
            if (Tur == "Aslan") {/*İf else yapısıyla kullanıcının Hayvan türü tercihlerine göre eklenmeler yapıldı */

                aslan1 = new Aslan(Ad, Yas);
                aslan2 = new Aslan(hayvanAdı2, hayvanYası2);
                hayvanatBahcesi1.hayvanEkle(aslan1);
                hayvanatBahcesi1.hayvanEkle(aslan2);
            }
            if (Tur == "Zebra") {
                zebra1 = new Zebra(Ad, Yas);
                zebra2 = new Zebra(hayvanAdı2, hayvanYası2);
                hayvanatBahcesi1.hayvanEkle(zebra1);
                hayvanatBahcesi1.hayvanEkle(zebra2);

            }
            if (Tur == "Kartal") {
                kartal1 = new Kartal(Ad, Yas);
                kartal2 = new Kartal(hayvanAdı2, hayvanYası2);
                hayvanatBahcesi1.hayvanEkle(kartal1);
                hayvanatBahcesi1.hayvanEkle(kartal2);
            }

            cout << "-----HAYVAN EKLE BAŞARILI:20 PUAN-----" << endl;
            cout << "Devam etmek istediğiniz işlemi seçiniz: " << endl << endl;

        }

        else if (secim == 2) {

            int ilkAslan = 5, ikinciAslan = 7, üçüncüAslan = 10;
            string ilkAslanadı = "Simba", ikinciAslanadı = "Güçlü", üçüncüAslanadı = "Cesur";/*Başlangıç olarak 10,5,7 yaşlarında olan 3 tane aslan projeye eklendi*/
            string ilkTur = "Aslan";
            cout << "-----HAYVANLAR------" << endl << endl;
            cout << "Hayvan Türü: " << ilkTur << endl;
            cout << "Hayvan Adı: " << ilkAslanadı << endl;
            cout << "Hayvan Yaşı: " << ilkAslan << endl;/*Fonksiyonda ilk başta alınan veriler bu şekilde bastırıldı*/
            cout << endl;
            cout << "Hayvan Türü: " << ilkTur << endl;
            cout << "Hayvan Adı: " << ikinciAslanadı << endl;
            cout << "Hayvan Yaşı: " << ikinciAslan << endl;
            cout << endl;
            cout << "Hayvan Türü: " << ilkTur << endl;
            cout << "Hayvan Adı: " << üçüncüAslanadı << endl;
            cout << "Hayvan Yaşı: " << üçüncüAslan << endl;
            cout << endl;
            hayvanatBahcesi1.hayvanlariGoster();
            cout << endl;
            cout << "Devam etmek istediğiniz işlemi seçiniz: " << endl << endl;

        }

        else if (secim == 3) {
            hayvanatBahcesi1.hayvanBesle(); /*Burada while(true) if else yapısnın kullanılma sebebi seçim yaparken hem yanlış seçimlerde tekrar seçim yapmak hem de
            seçilen fonksiyonlardan sonra ana menüye geri dönüş yapmaktır. Burada hayvanBesleme fonksiyonu çağrıldı.*/
            cout << "Devam etmek istediğiniz işlemi seçiniz: " << endl << endl;

        }
        if (secim == 4) {
            hayvanatBahcesi1.hayvanYasGuncelle();//Hayvanların düzenlendiği fonksiyon çağrılarak istenilen düzenlemeler yapıldı
            cout << "Devam etmek istediğiniz işlemi seçiniz: " << endl << endl;
        }


        else if (secim == 5) {
            cout << "Programdan çıkış yapılıyor iyi günler.";
            return 0;
        }
        else if (secim != 1 && secim != 2 && secim != 3 && secim != 4 && secim != 5)
            cout << "Geçersiz seçim yaptınız lütfen başka bir seçim yapınız." << endl << endl;//1-5 arası harici seçimlerde tekrar seçim yapmak için kullanıldı.
    }

    delete aslan1;/*New ile kullanıcıdan alınan veriler delete ile silindi.Sebebi verilerin otomatik olarak yıkıcılarla silinmemesi.*/
    delete aslan2;
    delete zebra1;
    delete zebra2;
    delete kartal1;
    delete kartal2;
    return 0;
}
