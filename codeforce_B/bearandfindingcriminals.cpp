#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    vector<int> criminals(n);
    for (int i = 0; i < n; i++) {
        cin >> criminals[i];
    }

    a--; // Convert to zero-based index
    int count = 0;

    for (int d = 0; d < n; d++) {
        int left = a - d;
        int right = a + d;

        if (left >= 0 && right < n) { // Both cities exist
            if (left == right) { // Same city
                count += criminals[left];
            } else { // Different cities
                count += criminals[left] + criminals[right];
            }
        } else if (left >= 0) { // Only left city exists
            count += criminals[left];
        } else if (right < n) { // Only right city exists
            count += criminals[right];
        }
    }

    cout << count << endl;
    return 0;
}
