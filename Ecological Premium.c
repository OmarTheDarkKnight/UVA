#include<stdio.h>

int main() {
    int testCases, farmers;

    while(scanf("%d", &testCases) != EOF) {
        while(testCases--) {
            scanf("%d", &farmers);
            int totalPremium = 0;
            while(farmers--) {
                int land, animals, ecofriendliness, premiumPerfarmer;
                scanf("%d %d %d", &land, &animals, &ecofriendliness);
                premiumPerfarmer = land * ecofriendliness;
                totalPremium += premiumPerfarmer;
            }
            printf("%d\n", totalPremium);
        }
    }
    return 0;
}
