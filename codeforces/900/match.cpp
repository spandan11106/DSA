#include <bits/stdc++.h>
using namespace std;

struct Container {
    int boxes;
    int matches_per_box;
};

bool cmp(const Container &a, const Container &b) {
    return a.matches_per_box > b.matches_per_box;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<Container> containers(m);

    for (int i = 0; i < m; ++i) {
        cin >> containers[i].boxes >> containers[i].matches_per_box;
    }

    sort(containers.begin(), containers.end(), cmp);

    long long total_matches = 0;
    int remaining = n;

    for (int i = 0; i < m && remaining > 0; ++i) {
        int take = min(remaining, containers[i].boxes);
        total_matches += 1LL * take * containers[i].matches_per_box;
        remaining -= take;
    }

    cout << total_matches << endl;
    return 0;
}

