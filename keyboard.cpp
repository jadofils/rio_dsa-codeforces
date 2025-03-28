#include <iostream>
#include <string>
using namespace std;

int main() {
    char direction;
    string sequence;
    cin >> direction >> sequence;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string result = "";

    for (char c : sequence) {
        size_t index = keyboard.find(c);
        if (direction == 'R') {
            result += keyboard[index - 1];
        } else if (direction == 'L') {
            result += keyboard[index + 1];
        }
    }

    cout << result << endl;
    return 0;
}
