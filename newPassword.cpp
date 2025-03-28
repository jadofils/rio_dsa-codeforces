#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string password = "";
    for (int i = 0; i < n; i++) {
        password += char('a' + (i % k));
    }

    cout << password << endl;

    return 0;
}
