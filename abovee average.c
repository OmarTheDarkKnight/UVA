#include<stdio.h>

int main() {
    int t, i;
    float c, s[1000], avg, x;

    while(scanf("%d", &t) == 1) {
        while(t--) {
            x = 0;
            avg = 0;
            scanf("%f", &c);
            for(i = 0; i < c; i++) {
                scanf("%f", &s[i]);
                avg += s[i];
            }

            avg = avg / c;
            for(i = 0; i < c; i++)
                if(s[i] > avg)
                    x++;
            x = (x/c) * 100;
            printf("%0.3f%%\n", x);
        }
    }
    return 0;
}
