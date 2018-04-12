#include<stdio.h>
#include<string.h>

int main() {
    int t, i, j, count;
    char in[111];

    while(scanf("%d", &t) == 1) {
        getchar();
        for(i = 0; i < t; i++) {
            gets(in);
            count = 0;

            for(j = 0; j < strlen(in); j++) {
                if(in[j] == 'a' || in[j] == 'd' || in[j] == 'g' || in[j] == 'j' || in[j] == 'm' ||
                   in[j] == 'p' ||in[j] == 't' ||in[j] == 'w' ||in[j] == ' ')
                    count += 1;
                else if(in[j] == 'b' || in[j] == 'e' || in[j] == 'h' || in[j] == 'k' ||
                        in[j] == 'n' || in[j] == 'q' ||in[j] == 'u' ||in[j] == 'x')
                    count += 2;
                else if(in[j] == 'c' || in[j] == 'f' || in[j] == 'i' || in[j] == 'l' ||
                        in[j] == 'o' || in[j] == 'r' ||in[j] == 'v' ||in[j] == 'y')
                    count += 3;
                else if(in[j] == 's' || in[j] == 'z')
                    count += 4;
            }
            printf("Case #%d: %d\n", i+1, count);
        }
    }
    return 0;
}
