#include <iostream>
using namespace std;

int main() {
    double celsius;                 // Temperature in Celsius

    // Constants for conversion
    const double factor1 = 9.0;
    const double factor2 = 5.0;
    const double offset = 32.0;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    double fahrenheit = (celsius * factor1 / factor2) + offset;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
