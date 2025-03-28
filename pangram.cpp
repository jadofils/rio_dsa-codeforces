#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool letters[26] = {false};
    for (char c : s) {
        letters[tolower(c) - 'a'] = true;
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
