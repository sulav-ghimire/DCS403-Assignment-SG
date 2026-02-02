#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    cout << "Enter matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Row sums:\n";
    for (int i = 0; i < 3; i++) {
        int rsum = 0;
        for (int j = 0; j < 3; j++)
            rsum += a[i][j];
        cout << rsum << " ";
    }

    cout << "\nColumn sums:\n";
    for (int j = 0; j < 3; j++) {
        int csum = 0;
        for (int i = 0; i < 3; i++)
            csum += a[i][j];
        cout << csum << " ";
    }

    return 0;
}
