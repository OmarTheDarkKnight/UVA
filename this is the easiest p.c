#include<stdio.h>

int main(){
    int a, b, c, i, t;

    while(scanf("%d", &t) == 1)
    {
        for(i = 0; i < t; i++) {
            scanf("%d %d %d", &a, &b, &c);
            if (a > b) {
                if (b > c)
                    printf("Case %d: %d\n", i+1, b);
                else{
                    if(a > c)
                        printf("Case %d: %d\n", i+1, c);
                    else printf("Case %d: %d\n", i+1, a);
                }
            }
            else{
                if (a > c)
                    printf("Case %d: %d\n", i+1, a);
                else {
                    if(b > c)
                        printf("Case %d: %d\n", i+1, c);
                    else printf("Case %d: %d\n", i+1, b);
                }
            }
        }
    }
    return 0;
}
