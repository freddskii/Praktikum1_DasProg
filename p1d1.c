#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double c;
    scanf("%d", &a);
    c = pow(a, 2) * pow(a+1, 2) / 4;
    printf("%.0lf", c);
}