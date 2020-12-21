#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int T, i, count[26];
    char str[1001];

    cin >> T;
    while(T--) {
        cin >> str;
        for (i = 0; i < 26; i++) {
            count[i] = 0;
        }
        for (i = 0; i < strlen(str); i++) {
            if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
               count[str[i] - 'a']++;
            }
        }
        for (i = 0; i < 26; i++) {
            if(count[i] != 0) {
                printf("%c = %d\n", 'a' + i, count[i]);
            }
        }
        cout << endl;
    }
}
