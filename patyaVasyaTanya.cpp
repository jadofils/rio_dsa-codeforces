#include <iostream>
using namespace std;

int main() {
    int n; // Number of problems
    cin >> n;

    int confidentProblems = 0;

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2) {
            confidentProblems++;
        }
    }

    cout << confidentProblems << endl;

    return 0;
}
