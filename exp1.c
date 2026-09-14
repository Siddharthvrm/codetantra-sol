#include <stdio.h>

int main() {
    int radius, area, circ;

    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    circ = 2 * 3.14 * radius;

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", circ);

    return 0;
}
