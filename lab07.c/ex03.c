/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    for (i--; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
   
   return 0;
}