#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int colors[4] = {s1, s2, s3, s4};
    int uniqueColors = 0;

    for (int i = 0; i < 4; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (colors[i] == colors[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueColors++;
        }
    }

    int horseshoesToBuy = 4 - uniqueColors;

    cout << horseshoesToBuy << endl;

    return 0;
}
