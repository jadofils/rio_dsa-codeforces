#include <iostream>
#include <vector>
#include <algorithm> // Correct header for sorting
using namespace std;

void numberOfCoins(vector<int> coins) {
    int targetMoney = 63; // The amount to make
    int count = 0; // To count the number of coins used
    // Sort coins in descending order
    sort(coins.begin(), coins.end(), greater<int>());
    // Iterate through the sorted coins
    for (int i = 0; i < coins.size(); i++) {
        while (targetMoney >= coins[i]) {
            targetMoney -= coins[i];
            count++; // Increment the count for each coin used
        }
    }

    // If all targetMoney is used up
    if (targetMoney == 0) {
        cout << "Total coins needed: " << count << endl;
    } else {
        cout << "Cannot make the target amount using given coins." << endl;
    }
}

int main() {
    vector<int> coins = {25, 10, 5, 1}; // Example coin denominations
    numberOfCoins(coins);
    return 0;
}
