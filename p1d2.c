#include <stdio.h>

int main() {
    long a, b;
    int c = 1;
    scanf("%ld %ld", &a, &b);
    
    if(a > 600 && b > 100000000){
        printf("GAK MASUK AKAL\n");
        c = 0;
    }

    if (a > 600 || b > 100000000){
        if (c){
            printf("GUWENDENG\n");
        }
    }

    if(b >= 15000*a){
        printf("PAHAM!\n");
    } else {
        printf("Tapi tunggu dulu ;D\n");
    }
    return 0;
} 