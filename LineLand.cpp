#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long cities[n];

    for (int i = 0; i < n; i++) {
        cin >> cities[i];
    }

    for (int i = 0; i < n; i++) {
        long long mini, maxi;

        if (i == 0) {
            mini = cities[1] - cities[0];
            maxi = cities[n - 1] - cities[0];
        } else if (i == n - 1) {
            mini = cities[n - 1] - cities[n - 2];
            maxi = cities[n - 1] - cities[0];
        } else {
            mini = min(cities[i] - cities[i - 1], cities[i + 1] - cities[i]);
            maxi = max(cities[n - 1] - cities[i], cities[i] - cities[0]);
        }

        cout << mini << " " << maxi << endl;
    }

    return 0;
}
