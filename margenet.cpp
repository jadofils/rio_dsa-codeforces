#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int groups = 1;
    string previous, current;
    cin >> previous;

    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current != previous) {
            groups++;
        }
        previous = current;
    }

    cout << groups << endl;
    return 0;
}
