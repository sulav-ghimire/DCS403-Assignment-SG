#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int freq[26] = {0};

    cout << "Enter string: ";
    cin >> str;

    for (char ch : str) {
        ch = tolower(ch);
        if (isalpha(ch))
            freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char(i + 'a') << ":" << freq[i] << " ";
    }

    return 0;
}

