#include<stdio.h>

int gcd(int a, int b) {
    while(a != b)
        if(a > b)
            a = a -b;
        else
            b = b -a;
    return a;
}

int main() {
    int n, i, j, g;

    while(scanf("%d", &n) == 1) {
        if(n == 0)
            break;
        else {
            g = 0;
            for(i = 1; i < n; i++)
                for(j = i+1; j <= n; j++)
                    g += gcd(i,j);
            printf("%d\n", g);
        }
    }
    return 0;
}
