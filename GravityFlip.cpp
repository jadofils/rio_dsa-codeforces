#include <iostream>
#include <algorithm> // For the sort function
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of columns
    int cubes[n];

    // Input the number of cubes in each column
    for (int i = 0; i < n; i++) {
        cin >> cubes[i];
    }

    // Sort the array to simulate the gravity pulling cubes to one side
    sort(cubes, cubes + n);

    // Output the rearranged cubes
    for (int i = 0; i < n; i++) {
        cout << cubes[i] << " ";
    }
    cout << endl;

    return 0;
}
