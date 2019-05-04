#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

inline int read_int() {
    int x;
    cin >> x;
    return x;
}

int main() {
    for (int T = read_int(), n; T-- and cin >> n;) {
        vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= i; j++)
                cin >> v[i][j];
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++)dp[n][i] = v[n][i];
        for (int i = n - 1; i >= 1; i--)
            for (int j = 1; j <= i; j++)
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + v[i][j];
        cout << dp[1][1] << endl;
    }
    return 0;
}