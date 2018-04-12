#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    int i, j, k, length;
    bool palindrome, mirrored, mirrorCandidate, brokenLoop;
    char input[100];
    char mirrorStringChars[21] = {'A', 'E', 'H', 'I', 'J', 'L', 'M', 'O', 'S', 'T',
                                        'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '5', '8'};
    char mirroedChars[21] = {'A', '3', 'H', 'I', 'L', 'J', 'M', 'O', '2', 'T',
                                        'U', 'V', 'W', 'X', 'Y', '5', '1', 'S', 'E', 'Z', '8'};

    while(scanf("%s", input) != EOF) {
        palindrome = mirrored = brokenLoop = false;
        mirrorCandidate = false;
        length = strlen(input);

        for(i = 0; i <= length; i++)
            if(input[i] == '0')
                input[i] = 'O';
        if(length < 2) {
            palindrome = true;
            for(i = 0; i < 21; i++){
                if(input[0] == mirrorStringChars[i]) {
                    if(input[0] == mirroedChars[i])
                        mirrored = true;
                        break;
                }
            }
        }
        else{
            for(i = 0; i <= length/2; i++) {
                for(j = 0; j < 21; j++) {
                    if(input[i] == mirrorStringChars[j]) {
                        mirrorCandidate = true;
                        break;
                    }
                    else mirrorCandidate = false;
                }
                if(!mirrorCandidate && j >= 21) {
                    break;
                }
            }
            for(i = 0, j = length - 1; i <= j; i++, j--) {

                if(mirrorCandidate) {

                    for(k = 0; k < 21; k++) {
                        if(input[i] == mirrorStringChars[k]) {
                            if(input[j] == mirroedChars[k]) {
                                mirrored = true;
                            } else {
                                mirrored = false;
                                mirrorCandidate = false;
                                break;
                            }
                        }
                    }
                }
                if(input[i] == input[j])
                    palindrome = true;
                else {
                    palindrome = false;
                    break;
                }
            }
        }



        if(mirrored == false && palindrome == false)
            printf("%s -- is not a palindrome.\n\n", input);
        else if (mirrored == false && palindrome == true)
            printf("%s -- is a regular palindrome.\n\n", input);
        else if(mirrored == true && palindrome == false)
            printf("%s -- is a mirrored string.\n\n", input);
        else if(palindrome == true && mirrored == true)
            printf("%s -- is a mirrored palindrome.\n\n", input);
    }
    return 0;
}
