#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, n, total_digit, temp1, temp2, sum, digit;

    cin >> t;
    while(t--) {
        sum = 0;
        total_digit = 0;
        cin >> n;
        temp1 = n;
        temp2 = n;
        while (temp1 > 0) {
            total_digit++;
            temp1 = temp1 / 10;
        }
        while (n > 0) {
            digit = n % 10;
            sum = sum + pow(digit, total_digit);
            n = n / 10;
        }
        if (sum == temp2) {
            cout << temp2 << " is an armstrong number!" << endl;
        }
        else {
            cout << temp2 << " is not an armstrong number!" << endl;
        }
    }

    return 0;
}
