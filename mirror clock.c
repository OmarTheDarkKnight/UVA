#include<stdio.h>

int main() {
    int t, h1, m1, h2, m2, s, i;

    while(scanf("%d", &t) == 1) {
        for(i = 0; i < t; i++) {
            scanf("%d:%d", &h1, &m1);

            if(m1 == 00) {
                m2 = m1;
                if(h1 == 12 || h1 == 6)
                    h2 =  h1;
                else h2 = 12 - h1;

            }
            else {
                h2 = 11 - h1;
                m2 = 60 - m1;
                if (h2 <= 0)
                    h2 = h2 + 12;
            }
            printf("%02d:%02d\n", h2, m2);
        }
    }
    return 0;
}
