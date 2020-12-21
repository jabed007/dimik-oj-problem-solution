#include <iostream>
using namespace std;

int main()
{
    int n1, n2, max, hcf, temp, t, i;

    cin >> t;
    while (t--) {
        cin >> n1 >> n2;
        if (n2 > n1) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        for (i = 1; i <= n2; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                hcf = i;
            }
        }
        cout << "LCM = " << (n1 * n2) / hcf << endl;
    }

    return 0;
}
