#include "Opiskelija.h"

#pragma once
class Harjoittelija: public Opiskelija
{
public:

	Harjoittelija();
	Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const string& aTy�paikka, float aPalkka);
	~Harjoittelija();



	void setPalkka(float aPalkka);
	float getPalkka() const;
	void setTy�paikka(const string& aTy�paikka);
	string getTy�paikka() const;

	void tulostaTiedot() const;



private:
	string mTy�paikka = "-";
	float mPalkka = 0;
};

