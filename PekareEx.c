#include <stdio.h>
#include <stdlib.h>

int main () {
	// just a number
	int nr = 10;

	printf("Värdet av nr är: %d\n", nr);
	//När vi skriver &nr så skriver vi ut minnesaddressen
	printf("Minnesaddressen för nr är: %d\n", &nr);

	// en pekare sparar en minnesaddress till ngt annat
	int *pnr = &nr; // pointer that points to nr
	printf("Värdet av det som pekaren pekar på: %d\n", *pnr);
	// change the value of the int (not the pointer)
	nr = 15;
	printf("Värdet av det som pekaren pekar på: %d\n", *pnr);

	// om vi inte använder * så får vi minnesaddressen till det pekaren pekar på
	// vilket är samma som den andra printf:en
	printf("%d", pnr);

	printf("visar den minnessaddressen  som pekaren finns lagrad på: %d\n", &pnr);

	return 0;
}
