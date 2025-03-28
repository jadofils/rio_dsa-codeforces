#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;

    // Array to track if a character has appeared
    bool charSeen[26] = {false};
    int distinctCount = 0;

    // Iterate through the username
    for (int i = 0; i < username.length(); i++) {
        char currentChar = username[i];

        // Convert to lowercase if it is uppercase
        if (currentChar >= 'A' && currentChar <= 'Z') {
            currentChar = currentChar + ('a' - 'A');
        }

        // Check if this character is new
        int index = currentChar - 'a';
        if (!charSeen[index]) {
            charSeen[index] = true;
            distinctCount++;
        }
    }

    // Check the distinct character count
    if (distinctCount % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
