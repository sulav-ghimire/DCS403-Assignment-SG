#include <iostream>
using namespace std;

int main() {
    string str, result="";
    cin >> str;

    for (char ch : str) {
        char c = tolower(ch);
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            result += ch;
    }

    cout << result;
    return 0;
}

