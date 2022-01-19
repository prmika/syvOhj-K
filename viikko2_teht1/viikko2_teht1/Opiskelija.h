#pragma once
#include <iostream>
#include <string>
using namespace std;

class Opiskelija {
public:
	Opiskelija();
	Opiskelija(const string& aNimi,const string& aOpiskelijanumero);
	virtual ~Opiskelija();
	
	void setNimi(const string& aNimi);
	void SetOpiskelijanumero(const string& aOpiskelijanumero);
	void setOpintopisteet(int aOpintopisteet);
	
	string getNimi() const;
	string getOpiskelijanumero() const;
	int getOpintopisteet() const;



	// virtual -avainsana tuo dynaamisen eli ajonaikaisesti katsotaan, löytyykö aliluokalta toteustus
	// dynaaminen 
	virtual void tulostaTiedot() const;

private:
	string mNimi = "----";
	string mOpiskelijanumero = "xxxxx";
	int mOpintopisteet = 0;

};


