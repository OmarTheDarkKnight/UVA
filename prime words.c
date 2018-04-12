#include<stdio.h>
#include<string.h>

int main() {
    int i, j, flag, sum;
    char word[100];
    char s[53]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
    'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
    'Y', 'Z'};

    while(gets(word)) {
        sum = flag = 0;
        if(word[0] == '\0')
            flag = 2;
        for(i = 0; i < strlen(word); i++) {
            for(j = 0; j < 53; j++) {
                if(word[i] == s[j])
                    sum += (j+1);
            }
        }
        for(i = 2; i <= sum/2; i++) {
            if(sum % i == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            printf("It is not a prime word.\n");
        else if(flag == 0)
            printf("It is a prime word.\n");
    }
    return 0;
}
