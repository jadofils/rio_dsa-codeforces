#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int removals = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            removals++;
        }
    }

    cout << removals << endl;

    return 0;
}
