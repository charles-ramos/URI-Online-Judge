#include <stdio.h>

int main() {

    int numerof, horast;
    float valorh;

    scanf("%d%d%f", &numerof, &horast, &valorh);
    printf("NUMBER = %d\n", numerof);
    printf("SALARY = U$ %.2f\n", horast * valorh);


    return 0;
}
