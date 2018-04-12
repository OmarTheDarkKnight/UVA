#include<stdio.h>
#include<string.h>

int main() {
    int a, b, d, s, t, i, j, z;
    char credit[100], x[20];

    while(scanf("%d", &z) == 1) {
        getchar();
        while(z--) {
            gets(credit);
            j = a = b = 0;
            for(i = 0; i < strlen(credit); i++) {
                if(credit[i] == ' ')
                    continue;
                else {
                    x[j] = credit[i];
                    j++;
                }
            }
            x[j] = '\0';
            j = 0;
            for(i = strlen(x)-1; i >= 0; i--) {
                if(j == 0) {
                    b += (x[i]-48);
                    j = 1;
                }
                else {
                    t = (x[i] - 48);
                    t = 2 * t;
                    if(t >= 10) {
                        a += (t % 10);
                        t = t / 10;
                        a += t;
                    }
                    else a += t;
                    j = 0;
                }
            }
            s = a + b;
            if( s % 10 == 0)
                printf("Valid\n");
            else printf("Invalid\n");
        }
    }
    return 0;
}
