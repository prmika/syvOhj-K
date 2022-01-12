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

	void tulostatiedot();
private:
	string mNimi = "tuntematon";
	string mOpiskelijanumero = "000000";
	int mOpintopisteet = 0;

};


