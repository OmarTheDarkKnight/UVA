#include<stdio.h>

int main(){
    int h1, m1, h2, m2, a, b;

    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4) {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        else {
            if (h1 > h2)
                h2 += 24;
            else if (h1 == h2 && m1 > m2)
                h2 += 24;
            else ;
            a = h1*60 + m1;
            b = h2*60 + m2;
            printf ("%d\n", b-a);
        }
    }
    return 0;
}
