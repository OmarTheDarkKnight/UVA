#include<stdio.h>
#include<math.h>

int main() {
    int testCases;

    while(scanf("%d", &testCases) == 1) {
        while(testCases--) {
            unsigned long long int power, coefficients[30] = {0}, d, k, x, mul = 0, i;

            scanf("%llu", &power);
            for(i = 0; i <= power; i++)
                scanf("%iiu", &coefficients[i]);
            scanf("%llu %llu", &d, &k);

            for(i = 0; i < k;) {
                mul++;
                i += mul*d;
            }

            unsigned long long int sum = 0;
            double temp;
            for(i = 0; i <= power; i++) {
                temp = pow(mul, i);
                x = temp;
                sum += coefficients[i] * x;
            }

            printf("%llu\n", sum);
        }
    }
    return 0;
}
