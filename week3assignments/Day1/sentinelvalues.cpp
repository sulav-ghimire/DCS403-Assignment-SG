#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int count = 0;
    
    cout << "Enter numbers (enter 0 to stop):" << endl;
    
    while (true) {
        cin >> num;
        
        if (num == 0) {  // Sentinel value
            break;
        }
        
        sum += num;
        count++;
    }
    
    if (count > 0) {
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Average: " << (double)sum / count << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
    
    return 0;
}