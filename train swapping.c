#include<stdio.h>

int main() {
    int t, l, i, j, a[100], s;

    while(scanf("%d", &t) == 1) {
        while(t--) {
            s = 0;
            scanf("%d", &l);
            for(i = 0; i < l; i++)
                scanf("%d", &a[i]);

            for(i = 0; i < l; i++)
                for(j = i+1; j < l; j++) {
                if(a[i] > a[j])
                    s++;
                }
            printf("Optimal train swapping takes %d swaps.\n", s);
        }
    }
    return 0;
}
