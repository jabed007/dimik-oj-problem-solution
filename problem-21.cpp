#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str[1001];
    int i, t;

    cin >> t;
    while(t--) {
        scanf(" %[^\n]", str);
        for (i = strlen(str) - 1; i >= 0; i--) {
            cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
