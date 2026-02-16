#include <iostream>
using namespace std;

int main() {
    int a[3][2] = {{1,2},{3,4},{5,6}};

    for (int j = 0; j < 2; j++) {
        int top = 0, bottom = 2;
        while (top < bottom) {
            swap(a[top][j], a[bottom][j]);
            top++;
            bottom--;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
