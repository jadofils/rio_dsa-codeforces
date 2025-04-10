#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int maxWatered = 0;

    for (int i = 0; i < n; i++) {
        int left = i;
        int right = i;

        // Spread left
        while (left > 0 && heights[left - 1] <= heights[left]) {
            left--;
        }

        // Spread right
        while (right < n - 1 && heights[right + 1] <= heights[right]) {
            right++;
        }

        // Calculate the total watered sections
        int totalWatered = right - left + 1;
        maxWatered = max(maxWatered, totalWatered);
    }

    cout << maxWatered << endl;
    return 0;
}
