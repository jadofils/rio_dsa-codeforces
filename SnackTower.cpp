#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> snacks(n + 1, 0);
    int currentTop = n;

    for (int i = 0; i < n; i++) {
        int snack;
        cin >> snack;
        snacks[snack] = 1;

        while (snacks[currentTop] == 1) {
            cout << currentTop << " ";
            currentTop--;
        }

        cout << endl;
    }

    return 0;
}
