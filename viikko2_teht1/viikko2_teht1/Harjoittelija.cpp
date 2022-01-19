#include "Harjoittelija.h"

Harjoittelija::Harjoittelija() : Opiskelija()
{
	cout << "Harjoittelian oletus rakentaja" << endl;
}

Harjoittelija::Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const string& aTy�paikka, float aPalkka)
	: Opiskelija( aNimi, aOpiskelijanumero), mTy�paikka( aTy�paikka), mPalkka(aPalkka)
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

void Harjoittelija::setTy�paikka(const string& aTy�paikka)
{
	mTy�paikka = aTy�paikka;
}

string Harjoittelija::getTy�paikka() const
{
	return mTy�paikka;
}

void Harjoittelija::tulostaTiedot() const
{
	//tulostetaan ensiksi opiskleijan tiedot
	
	//Opiskelija::tulostaTiedot(); -- voi tehd� my�s n�in

	//ei haluta tulostaa opiskelijan opiskelijanumeroa
	cout << "Nimi: " << getNimi() << endl;
	cout << "Opintopisteet: " << getOpintopisteet() << endl;
	cout << "ty�paikka: " << mTy�paikka << endl;
	cout << "Palkka: " << mPalkka << endl;
}
