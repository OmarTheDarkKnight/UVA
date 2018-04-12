#include<stdio.h>
#include<math.h>

int main() {
    long long unsigned int n, x;
    int j = 0;

    while(scanf("%llu", &n) == 1 && n != 0) {
            x = ceil ( (3 + sqrt (9 + ( 8 * n))) /2);
            printf("Case %d: %llu\n", ++j, x);
    }
    return 0;
}
