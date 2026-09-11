#include <stdio.h>

int main(){
    int a,s,d,f,g,sum,per;

    // printf("enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a,&s,&d,&f,&g);

    sum = a+s+d+f+g;
    per = sum/5;

    printf("Sum: %d\n", sum);
    printf("Percentage: %d%%\n", per);

}