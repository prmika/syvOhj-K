#include "Harjoittelija.h"

Harjoittelija::Harjoittelija() : Opiskelija()
{
	cout << "Harjoittelian oletus rakentaja" << endl;
}

Harjoittelija::Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const string& aTyöpaikka, float aPalkka)
	: Opiskelija( aNimi, aOpiskelijanumero), mTyöpaikka( aTyöpaikka), mPalkka(aPalkka)
{
	cout << "Harjoittelijan rakentaja" <<endl;
}

Harjoittelija::~Harjoittelija()
{
	cout << "Harjoittelija " <<getNimi() << " poistettu muistista" << endl;
}

void Harjoittelija::setPalkka(float aPalkka)
{
	mPalkka = aPalkka;
}

float Harjoittelija::getPalkka() const
{
	return mPalkka;
}

void Harjoittelija::setTyöpaikka(const string& aTyöpaikka)
{
	mTyöpaikka = aTyöpaikka;
}

string Harjoittelija::getTyöpaikka() const
{
	return mTyöpaikka;
}

void Harjoittelija::tulostaTiedot() const
{
	//tulostetaan ensiksi opiskleijan tiedot
	
	//Opiskelija::tulostaTiedot(); -- voi tehdä myös näin

	//ei haluta tulostaa opiskelijan opiskelijanumeroa
	cout << "Nimi: " << getNimi() << endl;
	cout << "Opintopisteet: " << getOpintopisteet() << endl;
	cout << "työpaikka: " << mTyöpaikka << endl;
	cout << "Palkka: " << mPalkka << endl;
}
