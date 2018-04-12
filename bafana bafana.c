#include<stdio.h>

int main(){
    int t, n, k, p, i, j;

    while(scanf("%d", &t) == 1){
        for(j = 0; j < t; j++){
            scanf("%d %d %d", &n, &k, &p);

            for(i = 0; i < p; i++){
                k++;
                if (k > n)
                    k = k-n;
            }
            printf("Case %d: %d\n", j+1, k);
        }
    }

    return 0;
}
