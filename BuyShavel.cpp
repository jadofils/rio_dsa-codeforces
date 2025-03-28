#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int shovels = 1;
    while (true) {
        int cost = shovels * k;
        if (cost % 10 == 0 || cost % 10 == r) {
            break;
        }
        shovels++;
    }

    cout << shovels << endl;

    return 0;
}
