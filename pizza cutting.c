#include<stdio.h>

int main() {
    long long int n, c;

    while(scanf("%lld", &n) == 1) {
        if(n < 0)
            break;
        else{
            c = n*(n+1)/2 + 1;
            printf("%lld\n", c);
        }
    }
    return 0;
}
