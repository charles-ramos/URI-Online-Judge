#include <stdio.h>
#include <stdlib.h>

int main() {
    int NCem, NCqt, NVnt, NDez, NCnc, NDois;
    int MReal, MCqt, MVnt, MDez, MCnc, MUm;
    double v;

    scanf("%lf", &v);
    int notas = v;
    int moedas = (v - notas) * 100;

    if((moedas * 1000) % 10 == 9){
        moedas++;
    }

    //Notas
    NCem = notas/100;
    notas = notas%100;
    NCqt = notas/50;
    notas = notas%50;
    NVnt = notas/20;
    notas = notas%20;
    NDez = notas/10;
    notas = notas%10;
    NCnc = notas/5;
    notas = notas%5;
    NDois = notas/2;
    notas = notas%2;

    //Moedas
    MReal = notas/1;
    notas = notas%1;
    MCqt = moedas/50;
    moedas = moedas%50;
    MVnt = moedas/25;
    moedas = moedas%25;
    MDez = moedas/10;
    moedas = moedas%10;
    MCnc = moedas/5;
    moedas = moedas%5;
    MUm = moedas/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", NCem);
    printf("%d nota(s) de R$ 50.00\n", NCqt);
    printf("%d nota(s) de R$ 20.00\n", NVnt);
    printf("%d nota(s) de R$ 10.00\n", NDez);
    printf("%d nota(s) de R$ 5.00\n", NCnc);
    printf("%d nota(s) de R$ 2.00\n", NDois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", MReal);
    printf("%d moeda(s) de R$ 0.50\n", MCqt);
    printf("%d moeda(s) de R$ 0.25\n", MVnt);
    printf("%d moeda(s) de R$ 0.10\n", MDez);
    printf("%d moeda(s) de R$ 0.05\n", MCnc);
    printf("%d moeda(s) de R$ 0.01\n", MUm);

    return 0;
}
