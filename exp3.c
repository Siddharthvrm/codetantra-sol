#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,s;
    float ar;

    scanf("%d %d %d", &a,&b,&c);

    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("%.2f", ar);
}