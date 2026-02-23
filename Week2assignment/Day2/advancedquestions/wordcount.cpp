#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word)
        count++;

    cout << "Number of words: " << count;
    return 0;
}

