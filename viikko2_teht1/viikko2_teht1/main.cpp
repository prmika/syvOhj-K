#include "Opiskelija.h"
#include "Harjoittelija.h"

int main() {


	cout << "HARJOITTELIJA ESSI HEAP";
	Opiskelija* essi = new Harjoittelija("Essi", "45567", "Vincit", 3500);
	essi->tulostaTiedot();

	
	delete essi;

	return EXIT_SUCCESS;
}// kalle poistuu muistista t�ss�