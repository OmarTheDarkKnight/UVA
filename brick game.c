#include<stdio.h>

int main() {
    int t, a[11], m, i, j, x , y;

    while(scanf("%d", &t) == 1) {
        for(i = 0; i < t; i++) {
            scanf("%d", &m);
            for(j = 0; j < m; j++)
                scanf("%d", &a[j]);
            if(m%2 == 1)
                printf("Case %d: %d\n", i+1, a[m/2]);
            else {
                if(a[(m/2) - 1] <= a[m/2])
                    printf("Case %d: %d\n", i+1, a[(m/2) - 1]);
                else printf("Case %d: %d\n", i+1, a[m/2]);
            }
        }
    }
    return 0;
}
