#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> skill1, skill2, skill3;
    for (int i = 1; i <= n; i++) {
        int skill;
        cin >> skill;
        if (skill == 1) {
            skill1.push_back(i);
        } else if (skill == 2) {
            skill2.push_back(i);
        } else if (skill == 3) {
            skill3.push_back(i);
        }
    }

    int w = min(skill1.size(), min(skill2.size(), skill3.size()));
    cout << w << endl;

    for (int i = 0; i < w; i++) {
        cout << skill1[i] << " " << skill2[i] << " " << skill3[i] << endl;
    }

    return 0;
}
