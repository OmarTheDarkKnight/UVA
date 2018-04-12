#include<stdio.h>

int main() {
    int t, i;
    float c, d, ans, f;

    while(scanf("%d", &t) == 1) {
        for(i = 0; i < t; i++) {
            scanf("%f %f", &c, &d);
            if(d == 0)
                f = 0;
            else
                f = (5*d)/9;
            ans = c + f;
            printf("Case %d: %0.2f\n", i+1, ans);
        }
    }
    return 0;
}
