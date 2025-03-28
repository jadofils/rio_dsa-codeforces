#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int values[n];
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    sort(values, values + n);

    int minValue = values[0];
    int maxValue = values[n - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (values[i] > minValue && values[i] < maxValue) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
