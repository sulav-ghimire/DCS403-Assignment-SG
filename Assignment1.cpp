#include <iostream>
using namespace std;

int main() {
    int baseSalary;                 // Base salary as integer
    const double bonusPercent = 15; // Bonus percentage as constant

    cout << "Enter Base Salary: ";
    cin >> baseSalary;

    // Calculate bonus amount using floating-point arithmetic
    double bonusAmount = baseSalary * (bonusPercent / 100.0);

    // Calculate total salary
    double totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
