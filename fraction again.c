#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int x, y, k;

    while(scanf("%d", &k) != EOF) {
        int count = 0;
        for(x = k+1 ; x <= 2*k; x++) {
            if((x*k)%(x-k) == 0)
                count++;
        }
        printf("%d\n", count);
        for(x = k+1 ; x <= 2*k; x++) {
            if((x*k)%(x-k) == 0)
                printf("1/%d = 1/%d + 1/%d\n", k, (x*k)/(x-k), x);
        }
    }
    return 0;
}
