#include <iostream>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int maxRoll = max(Y, W); // The highest number between Yakko's and Wakko's rolls
    int favorableOutcomes = 6 - maxRoll + 1; // Possible outcomes from the highest roll to 6
    int totalOutcomes = 6; // Total number of outcomes on a die

    // Simplify the fraction
    int gcd = __gcd(favorableOutcomes, totalOutcomes);
    favorableOutcomes /= gcd;
    totalOutcomes /= gcd;

    cout << favorableOutcomes << "/" << totalOutcomes << endl;

    return 0;
}
