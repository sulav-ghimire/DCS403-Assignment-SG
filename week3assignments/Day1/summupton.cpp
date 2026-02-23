#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}

