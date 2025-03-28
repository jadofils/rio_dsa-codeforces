#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int position = 1; // Initialize Liss's position as 1-based
    for (char move : t) {
        if (move == s[position - 1]) {
            position++;
        }
        if (position > s.length()) {
            position = s.length(); // Ensure Liss does not move out of the sequence
        }
    }
    cout << position << endl;

    return 0;
}
