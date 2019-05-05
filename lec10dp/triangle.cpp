
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 5;
int a[MAXN][MAXN] = {{7},
                     {3, 8,},
                     {8, 1, 0},
                     {2, 7, 4, 4,},
                     {4, 5, 2, 6, 5}};

int dp[MAXN][MAXN];


int main() {
    int n = MAXN;
    for (int i = 0; i < n; i++) {
        dp[n - 1][i] = a[n - 1][i];
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + a[i][j];
        }
    }
    cout << dp[0][0] << endl;

    return 0;
}



/**
 *
 * 5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
*/
