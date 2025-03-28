#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int counts[4] = {0};

    for (char c : s) {
        if (c != '+') {
            counts[c - '0']++;
        }
    }

    bool first = true;
    for (int i = 1; i <= 3; i++) {
        while (counts[i] > 0) {
            if (!first) {
                cout << "+";
            }
            cout << i;
            counts[i]--;
            first = false;
        }
    }

    cout << endl;
    return 0;
}
