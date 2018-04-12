#include<stdio.h>

int main() {
    int n, a[10000] = {999999}, i, j, t, m;

    while(scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        m=0;

        for(i = 0; i < n; i++) {
            for(j = i+1; j < n; j++) {
                if(a[i] > a[j]) {
                    m++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", m);
    }
    return 0;
}
