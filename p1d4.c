#include <stdio.h>

int main(){
    long a, b, c, d, e, f, g;
    scanf("%ld %ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f, &g);

    if (a == b || a == c || a == d || a == e || a == f || a == g){
        printf("SELEKSI NYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ.");
    } else if (b == c || b == d || b == e || b == f || b == g){
        printf("SELEKSI NYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ.");
    } else if (c == d || c == e || c == f || c == g){
        printf("SELEKSI NYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ.");
    } else if (d == e || d == f || d == g){
        printf("SELEKSI NYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ.");
    } else if (e == f || e == g){
        printf("SELEKSI NYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ.");
    } else if (f == g){
        printf("SELEKSI NYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ.");
    } else {
    if (a < b){
        long x = a; a = b ; b = x;
    }
    if (b < c){
        long x = b ; b = c ; c = x;
    }
    if (c < d){
        long x = c ; c = d ; d = x;
    }
    if (d < e){
        long x = d ; d = e ; e = x;
    }
    if (e < f){
        long x = e ; e = f ; f = x;
    } 
    if (f < g){
        long x = f ; f = g ; g = x;
    }


    if (a < b){
        long x = a; a = b ; b = x;
    }
    if (b < c){
        long x = b ; b = c ; c = x;
    }
    if (c < d){
        long x = c ; c = d ; d = x;
    }
    if (d < e){
        long x = d ; d = e ; e = x;
    }
    if (e < f){
        long x = e ; e = f ; f = x;
    } 


    if (a < b){
        long x = a; a = b ; b = x;
    }
    if (b < c){
        long x = b ; b = c ; c = x;
    }
    if (c < d){
        long x = c ; c = d ; d = x;
    }
    if (d < e){
        long x = d ; d = e ; e = x;
    }

    if (a < b){
        long x = a; a = b ; b = x;
    }
    if (b < c){
        long x = b ; b = c ; c = x;
    }
    if (c < d){
        long x = c ; c = d ; d = x;
    }


    if (a < b){
        long x = a; a = b ; b = x;
    }
    if (b < c){
        long x = b ; b = c ; c = x;
    }


    if (a < b){
        long x = a; a = b ; b = x;
    }

    printf("Peringkat 1 memiliki kekuatan sebesar %ld, AJAK DIA BERPETUALANG.\n", a);
    printf("Peringkat 2 memiliki kekuatan sebesar %ld, AJAK DIA BERPETUALANG.\n", b);
    printf("Peringkat 3 memiliki kekuatan sebesar %ld, AJAK DIA BERPETUALANG.\n", c);
    printf("Peringkat 4 memiliki kekuatan sebesar %ld, YAH KEKUATANMU KURENG.\n", d);
    printf("Peringkat 5 memiliki kekuatan sebesar %ld, YAH KEKUATANMU KURENG.\n", e);
    printf("Peringkat 6 memiliki kekuatan sebesar %ld, YAH KEKUATANMU KURENG.\n", f);
    printf("Peringkat 7 memiliki kekuatan sebesar %ld, YAH KEKUATANMU KURENG.\n", g);
    }
    
    return 0;
}