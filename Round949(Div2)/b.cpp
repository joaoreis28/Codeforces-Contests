#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    
    int l = max(0, n - m), r = n + m;
    
    int ans = 0;
    for (int i = 0; i <= 30; i++) {
        int u = l;
        if (~u >> i & 1) {
            u |= 1 << i;
            u &= ~((1 << i) - 1);
        }
        if (u <= r) {
            ans |= 1 << i;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}