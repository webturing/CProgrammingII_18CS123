#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<string> M(n + 1);
        for (int i = 0; i < n; i++) cin >> M[i];
        int t = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x, y, sum = 0;
                if (M[i][j] == '.') {
                    x = i, y = j;
                    while (M[x][y] != '#' && x >= 0) {
                        if (M[x][y] == 'G') sum++;
                        x--;
                    }
                    x = i, y = j;
                    while (M[x][y] != '#' && x < n) {
                        if (M[x][y] == 'G') sum++;
                        x++;
                    }
                    x = i, y = j;
                    while (M[x][y] != '#' && y >= 0) {
                        if (M[x][y] == 'G') sum++;
                        y--;
                    }
                    x = i, y = j;
                    while (M[x][y] != '#' && y < m) {
                        if (M[x][y] == 'G') sum++;
                        y++;
                    }
                    if (sum > t) t = sum;
                }
            }
        }
        cout << t << endl;
    }
    return 0;
}