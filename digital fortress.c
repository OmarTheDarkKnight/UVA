#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int i, j, k, l, m, n, t, x;
    char in[10099], temp[101][101];

    while(scanf("%d", &t) == 1) {
        getchar();
        for(x = 0; x < t; x++) {
            gets(in);
            for(i = 1; i <= sqrt(strlen(in)); i++)
                if((i*i) == strlen(in)) {
                    l=1;
                    break;
                }
                else l = 0;
            if(l == 0) {
                printf("INVALID\n");
                continue;
            }
            else {
                m=0;
                for(j = 0; j < i; j++) {
                    for(k = 0;  k < i; k++){
                        temp[j][k] = in[m];
                        m++;
                    }
                }

                for(j = 0; j < i; j++) {
                    for(k = 0;  k < i; k++){
                       printf("%c", temp[k][j]);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
