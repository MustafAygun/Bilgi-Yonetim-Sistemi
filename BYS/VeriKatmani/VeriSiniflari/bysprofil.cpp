#include "bysprofil.h"

BYSProfil::IsaretsizTamsayi BYSProfil::id() const
{
    return _id;
}

void BYSProfil::setId(const IsaretsizTamsayi &id)
{
    _id = id;
}

BYSProfil::Metin BYSProfil::TCKimlik() const
{
    return _TCKimlik;
}

void BYSProfil::setTCKimlik(const Metin &TCKimlik)
{
    _TCKimlik = TCKimlik;
}

BYSProfil::Metin BYSProfil::ad() const
{
    return _ad;
}

void BYSProfil::setAd(const Metin &ad)
{
    _ad = ad;
}

BYSProfil::Metin BYSProfil::soyad() const
{
    return _soyad;
}

void BYSProfil::setSoyad(const Metin &soyad)
{
    _soyad = soyad;
}

BYSProfil::Metin BYSProfil::eposta() const
{
    return _eposta;
}

void BYSProfil::setEposta(const Metin &eposta)
{
    _eposta = eposta;
}

BYSProfil::BYSProfil()
{
    this->_ad="";
    this->_id=0;
    this->_soyad="";
    this->_eposta="";
    this->_TCKimlik="";
}

BYSProfil::BYSProfil(const BYSProfil &diger)
{
    this->_ad=diger._ad;
    this->_id=diger._id;
    this->_soyad=diger._soyad;
    this->_eposta=diger._eposta;
    this->_TCKimlik=diger._TCKimlik;
}
