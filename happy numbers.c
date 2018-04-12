#include<stdio.h>

int main() {
    unsigned long long int t, n, sum, i, x;

    while(scanf("%llu", &t) == 1) {
        for(i = 0; i < t; i++) {
            scanf("%llu", &n);
            x = n;
            while(1) {
                if(x < 10)
                    break;
                else{
                    sum = 0;
                    while(x){
                        sum += ((x%10)*(x%10));
                        x = x / 10;
                    }
                    x = sum;
                }
            }
            if(x == 1 || x == 7) {
                printf("Case #%llu: %llu is a Happy number.\n", i+1, n);
            }
            else {
                printf("Case #%llu: %llu is an Unhappy number.\n", i+1, n);
            }
        }
    }
    return 0;
}
