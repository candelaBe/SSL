#include "Conversion.h"
#include "Conversion.c"
#include <stdio.h>
#include <assert.h>


int main() {

    // Tests de celsius a fahrenheit
    assert(fahrenheit(0) == 32);
    assert(fahrenheit(20) == 68);
    assert(fahrenheit(40) == 104);

    // Tests de fahrenheit a celsius
    assert(celsius(32) == 0);
    assert(celsius(68) == 20);
    assert(celsius(428) == 220);

    printf("Los tests se han realizado con exito.\n");

    return 0;
}