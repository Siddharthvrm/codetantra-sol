#include <stdio.h>

int main(){
    float c,f;

    printf("enter temp in c: ");
    scanf("%f", &c);

    f = (c*9)/5+32;

    printf("%.2f\n", f);
}