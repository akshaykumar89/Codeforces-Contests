/* Author: OnMyZenith - https://github.com/OnMyZenith */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;

#ifdef asr_debug
#include "dbg.hpp"
#else
#define dbg(...) 007
#endif

const int MX = 2e4 + 7;
template <class T> bool ckmin(T &x, const T &y) { return (y < x) ? (x = y, 1) : 0; }
template <class T> bool ckmax(T &x, const T &y) { return (y > x) ? (x = y, 1) : 0; }

void solve() {
    int n; cin >> n;
    vector<int> red(n), blue(n);
    for (int i = 0; i < n; i++) cin >> red[i];
    for (int i = 0; i < n; i++) cin >> blue[i];

    vector<vector<int>> mx_blues(n + 1, vector<int>(MX, -1));
    mx_blues[0][0] = 0;

    for (int i = 1; i <= n; i++) {

        // choose red
        for (int reds = 0; reds < MX; reds++) {
            if (reds + red[i - 1] < MX && mx_blues[i - 1][reds] != -1)
                ckmax(mx_blues[i][reds + red[i - 1]], mx_blues[i - 1][reds]);
        }

        // choose blue
        for (int reds = 0; reds < MX; reds++) {
            if (mx_blues[i - 1][reds] != -1) 
                ckmax(mx_blues[i][reds], mx_blues[i - 1][reds] + blue[i - 1]);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int reds = 0; reds < MX; reds++) {
            ckmax(ans, min(mx_blues[i][reds], reds));
        }
    }

    cout << ans << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cout << setprecision(15) << fixed;

    int TT = 1;
    cin >> TT;
    while(TT--) {
        solve();
    }

    return 0;
}
