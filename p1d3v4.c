#include <stdio.h>

int main(){
    long long a;
    scanf("%lld", &a);

    //sumpahinisemogabener:cry:

    //pencariangkav4
    int a1 = a / 10000000000000000;
    int a2 = (a % 10000000000000000) / 1000000000000000;
    int a3 = (a % 1000000000000000) / 100000000000000;
    int a4 = (a % 100000000000000) / 10000000000000;
    int a5 = (a % 10000000000000) / 1000000000000;
    int a6 = (a % 1000000000000) / 100000000000;
    int a7 = (a % 100000000000) / 10000000000;
    int a8 = (a % 10000000000) / 1000000000;
    int a9 = (a % 1000000000) / 100000000;
    int a10 = (a % 100000000) / 10000000;
    int a11= (a % 10000000) / 1000000;
    int a12= (a % 1000000) / 100000;
    int a13 = (a % 100000) / 10000;
    int a14 = (a % 10000) / 1000;
    int a15 = (a % 1000) / 100;
    int a16 = (a % 100) / 10;
    int a17 = (a % 10);

    // printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", b,c,d,e,f,g,h,i,j,k,l,m,n,o, p, q);

    if (a >= 1000000000 && a < 10000000000 && a8 == a17 && a9 == a16 && a10 == a15 && a11 == a14 && a12 == a13){ //10 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 10000000000 && a < 100000000000 && a7 == a17 && a8 == a16 && a9 == a15 && a10 == a14 && a11 == a13){ //11 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 100000000000 && a < 1000000000000 && a6 == a17 && a7 == a16 && a8 == a15 && a9 == a14 && a10 == a13 && a11 == a12){ //12 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 1000000000000 && a < 10000000000000 && a5 == a17 && a6 == a16 && a7 == a15 && a8 == a14 && a9 == a13 && a10 == a12){ //13 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 10000000000000 && a < 100000000000000 && a4 == a17 && a5 == a16 && a6 == a15 && a7 == a14 && a8 == a13 && a9 == a12 && a10 == a11) { //14 digit1
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 100000000000000 && a < 1000000000000000 && a3 == a17 && a4 == a16 && a5 == a15 && a6 == a14 && a7 == a13 && a8 == a12 && a9 == a11){ //15 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 1000000000000000 && a < 10000000000000000 && a2 == a17 && a3 == a16 && a4 == a15 && a5 == a14 && a6 == a13 && a7 == a12 && a8 == a11 && a9 == a10){ //16 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else if (a >= 10000000000000000 && a < 100000000000000000 && a1 == a17 && a2 == a16 && a3 == a15 && a4 == a14 && a5 == a13 && a6 == a12 && a7 == a11 && a8 == a10){ //17 digit
        printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
    } else {
        printf("Gamauuu!!, mending makan potato chip!!");
    }
    return 0;
}
    

    

