#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
const int MAXN = 30;
LL Q[MAXN][MAXN];

void init() {
    for (int i = 0; i < MAXN; i++)Q[i][0] = Q[i][i] = 1;
    for (int i = 2; i < MAXN; i++)
        for (int j = 1; j <= i - 1; j++)Q[i][j] = Q[i - 1][j] + Q[i - 1][j - 1];
}

int main() {
    init();
    for (int m, n; cin >> m >> n;)
        cout << Q[m][n] << endl;
    return 0;
}
