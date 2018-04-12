#include<stdio.h>
#include<string.h>

int main() {
    char input[1000];

    while(gets(input)) {
        int i, j, count;
        count = 0;
        for(i = 0; i < strlen(input); i++) {
            if( ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
                    && ((input[i+1] < 'A' || input[i+1] > 'Z') && (input[i+1] < 'a' || input[i+1] > 'z')) )
                count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
