#include<stdio.h>
#include<string.h>

int main() {
    int i, j, g, x;
    char a[110];

    while(scanf("%d", &g) == 1 && g != 0) {
        getchar();
        gets(a);
        x = strlen(a) / g;
        for(i = 0; i < strlen(a); ) {
            for(j = i+x-1; j >= i; j--) {
                if(j > strlen(a)) {
                    j = strlen(a) - 1;
                }
                printf("%c", a[j]);
            }
            i = i + x;
        }
        printf("\n");
    }
    return 0;
}
