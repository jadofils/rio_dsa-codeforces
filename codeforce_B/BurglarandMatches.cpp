#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Container {
    int matchboxes;
    int matches_per_box;
};

bool compare(const Container& a, const Container& b) {
    return a.matches_per_box > b.matches_per_box;
}

int main() {
    long long n; // Number of matchboxes the burglar can carry
    int m;       // Number of containers
    cin >> n >> m;

    vector<Container> containers(m);
    for (int i = 0; i < m; i++) {
        cin >> containers[i].matchboxes >> containers[i].matches_per_box;
    }

    // Sort containers by matches per box in descending order
    sort(containers.begin(), containers.end(), compare);

    long long total_matches = 0;

    for (int i = 0; i < m && n > 0; i++) {
        int boxes_to_take = min(n, (long long)containers[i].matchboxes);
        total_matches += (long long)boxes_to_take * containers[i].matches_per_box;
        n -= boxes_to_take;
    }

    cout << total_matches << endl;

    return 0;
}
