#include "Opiskelija.h"


Opiskelija::Opiskelija()
{
	cout << "Opiskeljan oletusrakentaja" << endl;
}

Opiskelija::Opiskelija(const string& aNimi, const string& aOpiskelijanumero)
	: mNimi(aNimi), mOpiskelijanumero(aOpiskelijanumero), mOpintopisteet(0)
{
	cout << "Opiskeljan 2 parametrin oletusrakentaja" << endl;
}

Opiskelija::~Opiskelija()
{
	cout << "Opiskelja " << mNimi << " poistettu muistista" << endl;
}

void Opiskelija::setNimi(const string& aNimi)
{
	mNimi = aNimi;
}

void Opiskelija::SetOpiskelijanumero(const string& aOpiskelijanumero)
{
	mOpiskelijanumero = aOpiskelijanumero;
}

void Opiskelija::setOpintopisteet(int aOpintopisteet)
{
	mOpintopisteet = aOpintopisteet;
}

string Opiskelija::getNimi() const
{
	return mNimi;
}

string Opiskelija::getOpiskelijanumero() const
{
	return mOpiskelijanumero;
}

int Opiskelija::getOpintopisteet() const
{
	return mOpintopisteet;
}


void Opiskelija::tulostaTiedot() const
{
	cout << "Opiskelijan nimi: " << mNimi << endl;
	cout << "Opiskelijanumero: " << mOpiskelijanumero << endl;
	cout << "Opintopisteet: " << mOpintopisteet << endl;
}