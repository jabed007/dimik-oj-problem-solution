#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int t, i, count;
    char str[1002];

    cin >> t;
    while(t--) {
        count = 0;
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
