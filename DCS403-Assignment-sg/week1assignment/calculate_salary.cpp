#include <iostream>
using namespace std;

int main() {
    int baseSalary;
    const float bonusPercentage = 15.0;  // constant bonus percentage

    cout << "Enter Base Salary: ";
    cin >> baseSalary;

    float bonusAmount = baseSalary * (bonusPercentage / 100.0);
    float totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}

