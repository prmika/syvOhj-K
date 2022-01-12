#include <iostream>
#include "Opiskelija.h"
using namespace std;

int main() {

	Opiskelija kalle = Opiskelija("Kalle", "12345");
	kalle.tulostatiedot();

	Opiskelija* ville = new Opiskelija("Ville", "33445"); //new muistivaraukseen ja palauttaa muistiosoitteen
	ville->tulostatiedot();

	delete ville;

	return EXIT_SUCCESS;
}