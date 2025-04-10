#include <iostream>
#include <vector>
using namespace std;

int main() {
    int target = 63;
    vector<int> coins = {25, 10, 5, 1}; // sorted in descending order
    vector<int> result;

    // Loop through each coin
    for (int coin : coins) {
        int count = target / coin; // Divide to find how many coins to use
        cout << "Coins of value " << coin << ": " << count << endl; // Print the count of each coin
        target %= coin;           // Update the remainder
        for (int i = 0; i < count; i++) {
            result.push_back(coin); // Add coins to the result
        }
    }

    // Display the resulting coins used
    cout << "Coins used to make the target: ";
    for (int coin : result) {
        cout << coin << " ";
    }
    cout << endl;

    return 0;
}
