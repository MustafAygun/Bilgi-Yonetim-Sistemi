#ifndef BYSPROFIL_H
#define BYSPROFIL_H

#include <string>
#include <memory>
#include "VeriKatmani_global.h"

using namespace std;

class VERIKATMANI_EXPORT BYSProfil
{
public:
    typedef string Metin;
    typedef unsigned int IsaretsizTamsayi;

    typedef BYSProfil Veri;
    typedef shared_ptr<Veri> Pointer;

    Pointer yeni() {
        return make_shared<Veri>();
    }
private:
    IsaretsizTamsayi _id;
    Metin _TCKimlik;
    Metin _ad;
    Metin _soyad;
    Metin _eposta;

public:
    BYSProfil();
    BYSProfil(const BYSProfil &diger);
    IsaretsizTamsayi id() const;
    void setId(const IsaretsizTamsayi &id);
    Metin TCKimlik() const;
    void setTCKimlik(const Metin &TCKimlik);
    Metin ad() const;
    void setAd(const Metin &ad);
    Metin soyad() const;
    void setSoyad(const Metin &soyad);
    Metin eposta() const;
    void setEposta(const Metin &eposta);
};

#endif // BYSPROFIL_H
