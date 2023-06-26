#include <stdio.h>
#include "Conversion.h"


double celsius (double fahr){ // recibe fahrenheit, devuelve celsius
	return ((5.0/9.0) * (fahr-32.0));
}

double fahrenheit (double celsius){ // recibe celsius, devuelve fahrenheit
	return ((9.0/5.0)*celsius+32.0);
}