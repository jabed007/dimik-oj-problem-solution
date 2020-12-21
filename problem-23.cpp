#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str[101], value[101];
    int t, i;

    cin >> t;
    while(t--) {
        for (i = 0; i < 26; i++) {
            value[i] = i + 1;
        }
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++) {
            printf("%d", value[str[i] - 'A']);
        }
        cout << endl;
    }

    return 0;
}
