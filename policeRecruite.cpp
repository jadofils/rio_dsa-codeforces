#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int untreatedCrimes = 0, availableOfficers = 0;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {
            if (availableOfficers > 0) {
                availableOfficers--;
            } else {
                untreatedCrimes++;
            }
        } else {
            availableOfficers += event;
        }
    }

    cout << untreatedCrimes << endl;

    return 0;
}
