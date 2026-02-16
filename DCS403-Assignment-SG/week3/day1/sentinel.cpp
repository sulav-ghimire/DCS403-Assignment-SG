#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter numbers (enter 0 to stop): ";

    while (true) {
        cin >> num;

        if (num == 0)   // sentinel value
            break;

        sum += num;
    }

    cout << "Sum of entered numbers = " << sum << endl;
    return 0;
}
    