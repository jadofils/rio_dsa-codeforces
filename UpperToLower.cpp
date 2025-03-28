#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;

    // Count the number of uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }

    // Transform the word based on the counts
    if (upperCount > lowerCount) {
        for (char &c : s) {
            c = toupper(c); // Convert to uppercase
        }
    } else {
        for (char &c : s) {
            c = tolower(c); // Convert to lowercase
        }
    }

    // Output the corrected word
    cout << s << endl;

    return 0;
}
