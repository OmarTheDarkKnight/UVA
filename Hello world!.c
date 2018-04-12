#include<stdio.h>

int main() {
    int t, c=0, n, i=0;

    while(scanf("%d", &n) == 1 & n >= 0){
        t = 1;
        for(c = 0; t < n; c++)
            t += t;
        printf("Case %d: %d\n", i+1, c);
        i++;
    }
    return 0;
}
