#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
{
        sum = sum + i;
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}
