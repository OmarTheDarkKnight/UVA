#include<stdio.h>

int main(){
    int t, i, j;

    while(scanf("%d", &t) != EOF)
        for(i = 0; i < t; i++){
            int t1, t2, f, a, ct[3], sum, x;

            scanf("%d %d %d %d", &t1, &t2, &f, &a);
            for(j = 0; j < 3; j++)
                scanf("%d", &ct[j]);

            for(j = 0; j < 2; j++)
                if(ct[j] >= ct[j+1])
                    continue;
                else {
                    x = ct[j];
                    ct[j] = ct[j+1];
                    ct[j+1] = x;
                }

            x = (ct[0] + ct[1]) / 2;
            sum = (t1 + t2 + f + a + x);

            if(sum >= 90)
                printf("Case %d: A\n", i+1);
            else if(sum >= 80 && sum <90)
                printf("Case %d: B\n", i+1);
            else if(sum >= 70 && sum <80)
                printf("Case %d: C\n", i+1);
            else if(sum >= 60 && sum <70)
                printf("Case %d: D\n", i+1);
            else printf("Case %d: F\n", i+1);
        }
        return 0;
}
