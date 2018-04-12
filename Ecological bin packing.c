#include<stdio.h>

int main() {
    int b[3], c[3], g[3], change[6];

    while(scanf("%d %d %d %d %d %d %d %d %d", &b[0], &g[0], &c[0], &b[1], &g[1], &c[1], &b[2], &g[2], &c[2]) != EOF) {
        change[0] = b[1] + b[2] + c[0] + c[2] + g[0] + g[1];
        change[1] = b[1] + b[2] + g[0] + g[2] + c[0] + c[1];

        change[2] = c[1] + c[2] + b[0] + b[2] + g[0] + g[1];
        change[3] = c[1] + c[2] + g[0] + g[2] + b[0] + b[1];

        change[4] = g[1] + g[2] + b[0] + b[2] + c[0] + c[1];
        change[5] = g[1] + g[2] + c[0] + c[2] + b[0] + b[1];

        int i, order = 0, minMove = change[0];
        for(i = 1; i < 6; i++) {
            if(minMove > change[i]) {
                minMove = change[i];
                order = i;
            }
        }

        if(order == 0)
            printf("BCG %d\n", minMove);
        else if(order == 1)
            printf("BGC %d\n", minMove);
        else if(order == 2)
            printf("CBG %d\n", minMove);
        else if(order == 3)
            printf("CGB %d\n", minMove);
        else if(order == 4)
            printf("GBC %d\n", minMove);
        else if(order == 5)
            printf("GCB %d\n", minMove);
    }
    return 0;
}
