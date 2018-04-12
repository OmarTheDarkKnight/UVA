#include<stdio.h>

int main() {
    long long int n, pattern[100], i;

    while(scanf("%lld", &n) == 1) {
        if(n == 0)
            break;
        else {
            pattern[0] = 1;
            pattern[1] = 2;
            for(i = 2; i<= n; i++) {
                pattern[i] = pattern[i-1] + pattern[i-2];
            }
            printf("%lld\n", pattern[n-1]);
        }
    }
    return 0;
}
