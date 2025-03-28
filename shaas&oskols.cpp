#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int wires[n];

    for (int i = 0; i < n; i++) {
        cin >> wires[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        if (x > 1) {
            wires[x - 2] += y - 1;
        }
        if (x < n) {
            wires[x] += wires[x - 1] - y;
        }
        wires[x - 1] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << wires[i] << endl;
    }

    return 0;
}
