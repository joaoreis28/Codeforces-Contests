#include <algorithm>
    #include <cstring>
    #include <iostream>
    #include <utility>
    #define MAXN 1000
     
    using namespace std;
     
    int memo[MAXN+3][5];
    string vs[MAXN+3];
    int n, m;
     
    pair<int, int> cost(int i, int char_i) {
        string s = vs[i];
        int c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'n' ||
                s[i] == 'a' ||
                s[i] == 'r' ||
                s[i] == 'e' ||
                s[i] == 'k') {
                c -= 1;
            }
            if (s[i] == 'n' && char_i == 4) {
                char_i = 0;
            }
            if (s[i] == 'a' && char_i == 0) {
                char_i += 1;
            }
            if (s[i] == 'r' && char_i == 1) {
                char_i += 1;
            }
            if (s[i] == 'e' && char_i == 2) {
                char_i += 1;
            }
            if (s[i] == 'k' && char_i == 3) {
                char_i += 1;
                c += 10;
            }
        }
        return make_pair(c, char_i);
    }
     
    int dp(int i, int j) {
        if (i == n) {
            return 0;
        }
        if (memo[i][j] != -1) {
            return memo[i][j];
        }
        auto [d, c] = cost(i, j);
        int ans = max(dp(i+1, j), dp(i+1, c) + d);
        memo[i][j] = ans;
        return ans;
    }
     
    int main() {
        int t;
        cin >> t;
        while (t--) {
            cin >> n >> m;
            memset(memo, -1, (5*n + 10) * sizeof(int));
            for (int i = 0; i < n; i++) {
                cin >> vs[i];
            }
            cout << dp(0, 4) << "\n";
        }
        return 0;
    }