#include<stdio.h>
#include<string.h>

int main() {
    long long unsigned int   x, n;
    int i, j, t, p;

    while(scanf("%llu", &n) == 1 && n != 0) {
        j = p = 0;
        int a[1000];
        while(n) {
            x = n % 2;
            if(x == 1)
                p++;
            n = n / 2;
            a[j] = x;
            j++;
        }
        printf("The parity of ");
        for(j = j-1; j >= 0; j--)
            printf("%d", a[j]);
        printf(" is %d (mod 2).\n", p);
    }
    return 0;
}
