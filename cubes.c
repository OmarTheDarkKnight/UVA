#include<stdio.h>
#include<math.h>

int main() {
    unsigned long int n, x, y, d;
    int i, j, f;

    while(scanf("%lu", &n) == 1 && n != 0) {
        f = 0;
        for(i = 2; i <= sqrt(n); i++) {
            x = pow(i,3);
            if(x > n)
                for(j = 1; j < i; j++) {
                    y = pow(j,3);
                    d = x - y;
                    if(d == n){
                        printf("%lu %lu\n", i, j);
                        f = 1;
                        break;
                    }
                }
            if(f == 1)
                break;
        }
        if(f == 0)
            printf("No solution\n");
    }
    return 0;
}
