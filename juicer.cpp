#include <iostream>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;

    int waste = 0, emptyCount = 0;

    for (int i = 0; i < n; i++) {
        int orangeSize;
        cin >> orangeSize;

        if (orangeSize <= b) {
            waste += orangeSize;
        }

        if (waste > d) {
            emptyCount++;
            waste = 0;
        }
    }

    cout << emptyCount << endl;

    return 0;
}
