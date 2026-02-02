//dynamic version of 2d array user input and print
#include <iostream>
using namespace std;
void printMatrix(const int m[][4], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 4; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][4];  
    int row = 3, col = 4;
    cout << "Enter elements of a " << row << "x" << col << " matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\nThe matrix is:" << endl;
    printMatrix(matrix, row);
    return 0;
}
