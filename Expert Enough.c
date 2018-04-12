#include<stdio.h>
#include<string.h>
#include<stdalign.h>

int main() {
    int testCase;

    while(scanf("%d", &testCase) == 1) {
        while(testCase--) {
            int databaseSize, i, j, queries;
            scanf("%d", &databaseSize);
            char *makers[databaseSize];
            long long int *prices[databaseSize];
            for(i = 0; i < databaseSize; i++) {
                makers[i] = (char *)malloc(20 * sizeof(char));
                prices[i] = (long long int *)malloc(2 * sizeof(long long int));
                scanf("%s %lld %lld", makers[i], &prices[i][0], &prices[i][1]);
            }
            scanf("%d", &queries);

            long long int queryPrices;
            while(queries--) {
                scanf("%lld", &queryPrices);
                int count = 0, outIndex;
                for(i = 0; i < databaseSize; i++) {
                    if(queryPrices >= prices[i][0] && queryPrices <= prices[i][1]) {
                        count++;
                        if(count == 1)
                            outIndex = i;
                        else break;
                    }
                }
                if(count != 1)
                    printf("UNDETERMINED\n");
                else printf("%s\n", makers[outIndex]);
            }
            if(testCase)
                printf("\n");
        }
    }
    return 0;
}
