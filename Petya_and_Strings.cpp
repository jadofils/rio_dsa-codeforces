#include <iostream>
#include <string>
#include <algorithm> // For transform function
using namespace std;

int main() {
    string str1, str2;
    
    // Input the two strings
    cin >> str1 >> str2;

    // Convert both strings to lowercase for case-insensitive comparison
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the strings
    if (str1 < str2) {
        cout << "-1" << endl;
    } else if (str1 > str2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
