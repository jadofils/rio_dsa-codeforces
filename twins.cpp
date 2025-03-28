#include <iostream>
using namespace std;

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    sortDescending(coins, n);

    int totalSum = 0, currentSum = 0, coinCount = 0;
    for (int i = 0; i < n; i++) {
        totalSum += coins[i];
    }

    for (int i = 0; i < n; i++) {
        currentSum += coins[i];
        coinCount++;
        if (currentSum > totalSum / 2) {
            break;
        }
    }

    cout << coinCount << endl;
    return 0;
}
