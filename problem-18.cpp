#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int t, i, j, k, count;
    char str[1002], vowel[1002], consonent[1002];

    cin >> t;
    while(t--) {
        j = 0;
        k = 0;
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++) {
            if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                    vowel[j] = str[i];
                    j++;
                }
                else {
                    consonent[k] = str[i];
                    k++;
                }
            }
            vowel[j] = '\0';
            consonent[k] = '\0';
        }
        printf("%s\n", vowel);
        printf("%s\n", consonent);
    }

    return 0;
}
