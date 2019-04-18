#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin >> n;) {
        if (n == 0)break;
        vector<vector<int>> a(n, vector<int>(n, 0));//int a[n][n]={0}
        vector<vector<bool>> used(n, vector<bool>(n, false));//bool used[n][n]={false;}
        int x = n - 1, y = n / 2;
        a[x][y] = 1;
        used[x][y] = true;
        for (int k = 2; k <= n * n; k++) {
            if (!used[(x + 1) % n][(y + 1) % n]) {
                x = (x + 1) % n;
                y = (y + 1) % n;
            } else if (!used[(x - 1 + n) % n][y]) {
                x = (x - 1 + n) % n;
            }
            a[x][y] = k;
            used[x][y] = true;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%2d ", a[i][j]);
            }
            cout << endl;
        }
    }

    return 0;
}