#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t, n, i;

    cin >> t;
    while(t--) {
        cin >> n;
        int ara[n];
        for (i = 0; i < n; i++) {
            cin >> ara[i];
        }
        cout << ara[0];
        for (i = 2; i < n; i = i + 2) {
            cout << " " << ara[i];
        }
        cout << endl;
    }
}
