#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    do
    {
        sum += i;
        i++;
    }
    while (i <= n) ;
    cout << "Sum from 1 to " << n << " is: " << sum << endl;
    
    return 0;
}
