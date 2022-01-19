#include "Opiskelija.h"

#pragma once
class Harjoittelija: public Opiskelija
{
public:

	Harjoittelija();
	Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const string& aTyöpaikka, float aPalkka);
	~Harjoittelija();



	void setPalkka(float aPalkka);
	float getPalkka() const;
	void setTyöpaikka(const string& aTyöpaikka);
	string getTyöpaikka() const;

	void tulostaTiedot() const;



private:
	string mTyöpaikka = "-";
	float mPalkka = 0;
};

