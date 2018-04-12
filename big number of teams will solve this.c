#include<stdio.h>
#include<string.h>

int main() {
    int t, i, j, space =0, same =0, k;
    char team[100], judge[100], team_space[100];

    while(scanf("%d", &t) == 1) {
        getchar();
        for(k = 0; k < t; k++) {
            gets(team);
            gets(judge);

            if(!(strcmp(team,judge))){
                printf("Case %d: Yes\n", k+1);
                continue;
            }
            else {
                j=0;
                for(i = 0; i < strlen(team); i++){
                    if(team[i] == ' ') {
                        continue;
                    }
                    else {
                        team_space[j] = team[i];
                        j++;
                    }
                }
                team_space[j]= '\0';

                if(!(strcmp(team_space,judge)))
                    printf("Case %d: Output Format Error\n", k+1);
                else printf("Case %d: Wrong Answer\n", k+1);
            }
        }
    }
    return 0;
}
