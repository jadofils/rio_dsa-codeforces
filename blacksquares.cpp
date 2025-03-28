#include <iostream>
#include <string>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    
    string s;
    cin >> s;

    int totalCalories = 0;

    for (char c : s) {
        if (c == '1') totalCalories += a1;
        else if (c == '2') totalCalories += a2;
        else if (c == '3') totalCalories += a3;
        else if (c == '4') totalCalories += a4;
    }

    cout << totalCalories << endl;

    return 0;
}
