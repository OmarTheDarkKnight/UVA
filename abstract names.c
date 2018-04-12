#include<stdio.h>
#include<string.h>

int main() {
    int t, i, j, x;
    char a[100], b[100];

    while(scanf("%d", &t) == 1) {
        getchar();
        for(i = 0; i < t; i++){
            gets(a);
            gets(b);

            if(strlen(a) != strlen(b)) {
                printf("No\n");
                continue;
            }
            else
                for(j = 0; j < strlen(a); j++) {
                   if(a[j] != b[j]) {
                       if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u') {
                            if(b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u')
                                x = 0;
                            else {
                                printf("No\n");
                                break;
                            }
                       }
                       else {
                            printf("No\n");
                            break;
                       }
                   }
                   if(j == strlen(a)-1) {
                        printf("Yes\n");
                        break;
                   }
                }
        }
    }
    return 0;
}
