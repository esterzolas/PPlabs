/*13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.*/


#include <stdio.h>
int main (){
    float k, m;
    printf ("Digite uma distancia em km: ");
    scanf ("%f", &k);
    m = k/1.61;
    printf ("O valor em metros eh: %0.2f", m);
    return 0;
}