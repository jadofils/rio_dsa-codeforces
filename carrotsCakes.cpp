#include <iostream>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int singleOvenTime = ((n + k - 1) / k) * t;

    if (d + t < singleOvenTime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
