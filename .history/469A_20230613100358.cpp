#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;  // Total number of levels

    vector<bool> levels(n+1, false);  // Boolean array to represent levels

    int p;
    cin >> p;  // Number of levels Little X can pass

    // Mark levels Little X can pass as true
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels[level] = true;
    }

    int q;
    cin >> q;  // Number of levels Little Y can pass

    // Mark levels Little Y can pass as true
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels[level] = true;
    }

    // Check if all levels are marked as true
    if (count(levels.begin(), levels.end(), true) == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}