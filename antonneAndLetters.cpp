#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    bool letters[26] = {false};
    int distinctCount = 0;

    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (!letters[index]) {
                letters[index] = true;
                distinctCount++;
            }
        }
    }

    cout << distinctCount << endl;

    return 0;
}
