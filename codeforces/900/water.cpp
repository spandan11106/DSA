#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<long long>> mat(n, vector<long long>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        map<int, vector<long long>> diag_dict;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int d = i - j;
                diag_dict[d].push_back(mat[i][j]);
            }
        }

        long long total_ops = 0;
        for (auto &p : diag_dict) {
            vector<long long> &arr = p.second;
            long long F = 0;
            long long ops_diag = 0;
            for (long long val : arr) {
                if (val + F < 0) {
                    long long deficit = -(val + F);
                    ops_diag += deficit;
                    F += deficit;
                }
            }
            total_ops += ops_diag;
        }
        cout << total_ops << '\n';
    }
    return 0;
}

