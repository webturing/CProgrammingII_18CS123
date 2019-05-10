#include<bits/stdc++.h>

using namespace std;
const int MAXN = 100 + 1;
int a[MAXN][MAXN] = {0};
int dp[MAXN][MAXN] = {0};

void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void printdp(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << setw(2) << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    //freopen("B.in","r",stdin);
    int T;
    cin >> T;
    while (T--) {
        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
                cin >> a[i][j];
        for (int j = 0; j < n; j++)dp[n - 1][j] = a[n - 1][j];
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++)
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + a[i][j];
        }
        cout << dp[0][0] << endl;
        //printdp(n);
    }
    return 0;
}
