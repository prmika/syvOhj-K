#include <iostream>
#include "Opiskelija.h"
using namespace std;

int main() {

	Opiskelija kalle = Opiskelija("Kalle", "12345");
	kalle.tulostatiedot();

	Opiskelija* ville = new Opiskelija("Ville", "33445"); //new muistivaraukseen ja palauttaa muistiosoitteen
	ville->tulostatiedot();

	Opiskelija lyyli;
	lyyli.tulostatiedot();
	lyyli.setNimi("Lyyli");
	lyyli.setOpintopisteet(100);
	lyyli.SetOpiskelijanumero("99889");
	lyyli.tulostatiedot();

	Opiskelija* kaisa = new Opiskelija();
	kasia->tulostatiedot();


	delete ville;//tuhotaan ville musitista

	return EXIT_SUCCESS;
}// kalle poistuu muistista tässä