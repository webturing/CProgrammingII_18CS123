#include <bits/stdc++.h>

using namespace std;
int n, m, sx, sy;
int dir[4][2] = {
        {1,  0},
        {-1, 0},
        {0,  1},
        {0,  -1}
};
char a[50][50];
int book[50][50];
int cnt = 0;

int f(int x, int y);

void dfs(int x, int y);

int main() {
    cin >> n >> m >> sx >> sy;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            book[i][j] = 0;
        }
    }
    dfs(sx, sy);
    cout << cnt << endl;
}

void dfs(int x, int y) {
    int sum = f(x, y);
    if (sum > cnt)cnt = sum;
    if (sum == 35) {
        cerr << x << " " << y << endl;
    }
    for (int k = 0; k < 4; k++) {
        int tx = x + dir[k][0];
        int ty = y + dir[k][1];
        if (tx < 0 || ty < 0 || tx >= n || ty >= m || a[tx][ty] != '.' || book[tx][ty] == 1)continue;
        book[tx][ty] = 1;
        dfs(tx, ty);
        book[tx][ty] = 0;
    }
}

int f(int x, int y) {
    int ret = 0;
    int i = x, j = y;
    while (i >= 0 && a[i][j] != '#') {
        if (a[i][j] == 'G')ret++;
        i--;
    }
    i = x, j = y;
    while (i < n && a[i][j] != '#') {
        if (a[i][j] == 'G')ret++;
        i++;
    }
    i = x, j = y;
    while (j >= 0 && a[i][j] != '#') {
        if (a[i][j] == 'G')ret++;
        j--;
    }
    i = x;
    j = y;
    while (j < m && a[i][j] != '#') {
        if (a[i][j] == 'G')ret++;
        j++;
    }
    return ret;
}