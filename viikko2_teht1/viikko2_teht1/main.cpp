#include "Opiskelija.h"
#include "Harjoittelija.h"

int main() {


	Harjoittelija Kalle = Harjoittelija("Kalle", "12345", "Gofore", 2000);
	Kalle.setOpintopisteet(105);
	Kalle.tulostaTiedot();
	

	Opiskelija* essi = new Harjoittelija("Essi", "45567", "Vincit", 3500);
	essi->tulostaTiedot();




	return EXIT_SUCCESS;
}// kalle poistuu muistista t�ss�