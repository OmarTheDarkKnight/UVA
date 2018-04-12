#include<stdio.h>
#include<string.h>

int main() {
    int i, j, k, x, t, count;
    char a[100], b[1000];
    while(scanf("%d", &t) == 1) {
        getchar();
        for(k = 1; k <= t; k++) {
            gets(a);
            printf("Case %d: ", k);
            for(i = 0; i < strlen(a);) {
                if(a[i] < 48 || a[i] > 60) {
                    count = 0;
                    for(j = i+1; ; j++) {
                        if(a[j] >= 48 && a[j] <= 60)
                            count = (count*10) + (a[j]-48);
                        else if(a[j] < 48 || a[j] > 60)
                            break;
                    }
                    x = j;
                    for(j = 1; j <= count; j++)
                        printf("%c", a[i]);
                    i = x;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
