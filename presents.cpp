#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int gifts[n], result[n];
    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
    }

    for (int i = 0; i < n; i++) {
        result[gifts[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}
