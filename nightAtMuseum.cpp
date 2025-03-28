#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string name;
    cin >> name;

    int rotations = 0;
    char currentPosition = 'a';

    for (char c : name) {
        int clockwise = abs(c - currentPosition);
        int counterClockwise = 26 - clockwise;
        rotations += min(clockwise, counterClockwise);
        currentPosition = c;
    }

    cout << rotations << endl;

    return 0;
}
