#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
        cout << ch << " is a letter.";
    else if (isdigit(ch))
        cout << ch << " is a digit.";
    else
        cout << ch << " is a special character.";

    return 0;
}

