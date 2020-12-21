#include <iostream>
using namespace std;

int main()
{
    int t, count;
    double x;

    cin >> t;
    while (t--) {
        count = 0;
        cin >> x;
        while (x >= 1) {
            x = x / 2;
            count++;
        }
        cout << count << " days" << endl;
    }

    return 0;
}
