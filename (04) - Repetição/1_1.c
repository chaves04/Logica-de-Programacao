#include <stdio.h>

int main (void){

    int graus_f = 50;
    float graus_c;

    for (graus_f ; graus_f <= 65 ; graus_f++){

        graus_c = (float)5/9*(graus_f - 32);

        printf("Graus Fahrenheit (%i) - (%.2f) Graus Celsius\n", graus_f, graus_c);
    }



    return 0;
}
