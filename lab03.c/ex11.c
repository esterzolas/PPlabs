/*11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”*/

#include <stdio.h>

int main()
{
    int num, soma = 0;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        while (num > 0 )
        {
            soma = soma + (num % 10); // 
            num = num / 10;
        }
        

        printf ("A soma dos algarismos desse numero eh: %d", soma);
    }
    else
    {
        printf("Numero invalido!");
    }

    return 0;
}