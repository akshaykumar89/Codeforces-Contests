#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    
    vector<vector<int>> b(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char x;
            std::cin >> x;
            b[i][j] = x - '0';
        }
    }
    
    for (int i = 0; i < n; i++) {
        std::vector<int> a{i};
        for (int j = 0; j < n; j++) {
            if (b[j][i]) {
                a.push_back(j);
            }
        }
        std::cout << a.size();
        for (auto x : a) {
            std::cout << " " << x + 1;
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}