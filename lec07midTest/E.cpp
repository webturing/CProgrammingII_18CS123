#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<vector<int>> a(n, vector<int>(n, 0));
        if (n == 0)break;
        int x = n - 1, y = n / 2;
        a[x][y] = 1;
        for (int k = 2; k <= n * n; k++) {
            if (a[(x + 1) % n][(y + 1) % n] == 0) {
                x = (x + 1) % n;
                y = (y + 1) % n;
                a[x][y] = k;
            } else if (a[(x - 1 + n) % n][y] == 0) {
                x = (x - 1 + n) % n;
                a[x][y] = k;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << setw(2) << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
