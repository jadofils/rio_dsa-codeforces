#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Loop using iterators
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << "Element with pointer: " << *it << endl;
    }

    // Range-based loop
    for (int num : numbers) {
        cout << "Element: " << num << endl;
    }

    return 0;
}
