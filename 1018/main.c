#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas, tmp;

    scanf("%d", &notas);

    printf("%d\n", notas);
    printf("%d nota(s) de R$ 100,00\n", notas/100);
    tmp = (notas%100);


    printf("%d nota(s) de R$ 50,00\n", tmp/50);
    tmp = (tmp%50);

    printf("%d nota(s) de R$ 20,00\n", tmp/20);
    tmp = (tmp%20);

    printf("%d nota(s) de R$ 10,00\n", tmp/10);
    tmp = (tmp%10);

    printf("%d nota(s) de R$ 5,00\n", tmp/5);
    tmp = (tmp%5);

    printf("%d nota(s) de R$ 2,00\n", tmp/2);
    tmp = (tmp%2);

    printf("%d nota(s) de R$ 1,00\n", tmp/1);
    return 0;
}
