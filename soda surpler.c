#include<stdio.h>

int main(){
    int n, e, f, c, i;
    while(scanf("%d", &n) == 1) {
        for(i = 0; i < n; i++) {
            scanf("%d %d %d", &e, &f, &c);
            int x, t, s;
            s=0;
            t= e+f;
            while(t/c != 0){
                x = t/c;
                t = (t%c) + (t/c);
                s += x;
            }
            printf("%d\n", s);
        }
    }
    return 0;
}
