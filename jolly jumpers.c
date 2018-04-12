#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int input[3010], i, j, compareInt, inputNumber;
    bool jolly;

    while(scanf("%d", &inputNumber) != EOF) {
        for(i = 0; i < inputNumber; i++) {
            scanf("%d", &input[i]);
        }
        jolly = true;

        int k, length = 0, diff[3010] = {0};
        for(i = 0, j= 1; i < inputNumber - 1; i++, j++) {

            compareInt = abs(input[i] - input[j]);
            if(compareInt <= inputNumber - 1) {
                for(k = 0; k <= length; k++) {
                    if(compareInt == diff[k])
                }
            }
            else {
                jolly = false;
                break;
            }
        }

        if(jolly)
            printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
