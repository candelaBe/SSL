#include <stdio.h>
#include "Conversion.h"
#include "Conversion.c"

void PrintTablas(void);
void PrintTablaFahrenheitACelsius(void);
void PrintTablaCelciusAFahrenheit(void);
void PrintFilas(double(*funcion)(double));

int main(void) {

    PrintTablas();
    
	return 0;
}

void PrintTablas (void){

    printf("Fahrenheit a Celsius\n");
	PrintTablaFahrenheitACelsius ();

	printf("\n\nCelsius a Fahrenheit\n");
	PrintTablaCelciusAFahrenheit ();

}
void PrintTablaFahrenheitACelsius(void){

	PrintFilas(celsius);
}

void PrintTablaCelciusAFahrenheit (void){
	
	PrintFilas(fahrenheit);
}

void PrintFilas(double(*funcion)(double)){
    double lower = 0, upper = 300, step = 20, temperatura;

    for (temperatura = lower; temperatura <= upper; temperatura = temperatura + step){
        printf("%3.0fº =%6.1fº\n", temperatura, funcion(temperatura));

    }
}