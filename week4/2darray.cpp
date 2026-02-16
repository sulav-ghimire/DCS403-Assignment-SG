//passing 2D array to function
#include<iostream>
using namespace std;
void pointMatrix(const int m[][4], int row) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < 4; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    pointMatrix(matrix, 3);
    return 0;
}