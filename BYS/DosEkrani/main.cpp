#include <iostream>

#include <memory>
#include <VeriSiniflari/bysprofil.h>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    BYSProfil profil;
    profil.setAd("Mustafa");

    BYSProfil *profil1 = &profil;
    profil1->setAd("Mustafa");

    BYSProfil *profil2 = new BYSProfil();
    profil2->setAd("Mustafa");
    delete profil2;

    shared_ptr<BYSProfil> profil3 = make_shared<BYSProfil>;
    profil3->setAd("Mustafa");
    shared_ptr<BYSProfil> profil4 = profil3;


    BYSProfil::Pointer profil5 =make_shared<BYSProfil>();
    profil5->setAd("Mustafa");

    BYSProfil::Pointer profil6 = BYSProfil::yeni();
    profil6->setAd("Mustafa");

    // Vektör Oluşturma
    vector<BYSProfil>  v1;
    vector<BYSProfil::Pointer> v2;

    //Eleman Ekleme
    v1.push_back(profil);
    v1.push_back(profil);

    //Eleman Silme
    v1.erase(v1.begin());
    v1.pop_back();

    v1.capacity(); // Vektör kaç eleman saklayabilir
    v1.size(); // Vektörde kaç eleman var

    // Elemanlara erişme
    // Okuma
    BYSProfil e =v1.at(4);
    BYSProfil e1=v1[4000];
    //Atama
    v1[5]=profil;

    //Döngü
    for(unsigned int i=0;i<v1.size();i++){
        BYSProfil p=v1[i];
        // İşlemler...
    }

    for(auto i = v1.begin(); i!=v1.end(); i++){
        auto p = *i;
        //İşlemler
    }

    for(auto p : v1){
        //İşlemler
    }
    v2.push_back(profil5);
    v2.push_back(profil6);

    // HASH
    // Oluşturma
    unordered_map<string, BYSProfil> c1;

    //Veri Ekleme ve Atama
    c1[profil.TCKimlik()]= profil;

    // Okuma
    if(c1.find("12345678") != c1.end()){
        BYSProfil aramaSonucu = c1.at("12345678");
    } else {
        // Bulunamadı!
    }

    BYSProfil aramaSonucu1=c1["12345678"];
}






















