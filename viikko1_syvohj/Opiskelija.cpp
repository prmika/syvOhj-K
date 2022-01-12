#include "Opiskelija.h"
#include <iostream>
using namespace std;


Opiskelija::Opiskelija()
{
	cout << "Opiskeljan oletusrakentaja" <<endl;
}

Opiskelija::Opiskelija(string aNimi, string aOpiskelijanumero)
	: mNimi(aNimi), mOpiskelijanumero(aOpiskelijanumero), mOpintopisteet(0)
{
	cout << "Opiskeljan 2 parametrin oletusrakentaja" << endl;
}

Opiskelija::~Opiskelija()
{
	cout << "Opiskelja " <<mNimi << " poistettu muistista" << endl;
}

void Opiskelija::setNimi(string aNimi)
{
	mNimi = aNimi;
}

void Opiskelija::SetOpiskelijanumero(string aOpiskelijanumero)
{
	mOpiskelijanumero = aOpiskelijanumero;
}

void Opiskelija::setOpintopisteet(int aOpintopisteet)
{
	mOpintopisteet = aOpintopisteet;
}

string Opiskelija::getNimi()
{
	return mNimi;
}

string Opiskelija::getOpiskelijanumero()
{
	return mOpiskelijanumero;
}

int Opiskelija::getOpintopisteet()
{
	return mOpintopisteet;
}


void Opiskelija::tulostatiedot()
{
	cout << "Opiskelijan nimi: " << mNimi << endl;
	cout << "Opiskelijanumero: " << mOpiskelijanumero << endl;
	cout << "Opintopisteet: " << mOpintopisteet << endl;
}
