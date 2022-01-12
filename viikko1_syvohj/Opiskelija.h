#pragma once
#include <string>
using namespace std;

class Opiskelija {
public:
	Opiskelija();
	Opiskelija(string aNimi, string aOpiskelijanumero);
	~Opiskelija();
	void setNimi(string aNimi);
	void SetOpiskelijanumero(string aOpiskelijanumero);
	void setOpintopisteet(int aOpintopisteet);
	string getNimi();
	string getOpiskelijanumero();
	int getOpintopisteet();

	void tulostatiedot();

private:
	string mNimi = "----";
	string mOpiskelijanumero = "xxxxx";
	int mOpintopisteet = 0;

};


