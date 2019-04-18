#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MAXN = 50 + 10;
int Next[4][2] = {{-1, 0},
                  {0,  1},
                  {1,  0},
                  {0,  -1}};
char G[MAXN][MAXN];
int vis[MAXN][MAXN];
int sx, sy;
int ex, ey;
int n, m;

bool BFS() {
    memset(vis, 0, sizeof(vis));
    queue<pair<int, int> > que;
    que.push(make_pair(sx, sy));
    vis[sx][sy] = 1;
    while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        if (G[x][y] == 'L')
            return true;
        for (int i = 0; i < 4; i++) {
            int tx = x + Next[i][0];
            int ty = y + Next[i][1];
            if (tx < 1 || tx > n || ty < 1 || ty > m)
                continue;
            if (vis[tx][ty] == 1 || G[tx][ty] == 'x')
                continue;
            que.push(make_pair(tx, ty));
            vis[tx][ty] = 1;
        }
    }
    return false;
}

int main() {
    while (cin >> n >> m) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> G[i][j];
                if (G[i][j] == 'S')
                    sx = i, sy = j;
                if (G[i][j] == 'L')
                    ex = i, ey = j;
            }
        }
        if (BFS())
            cout << "I saved him." << endl;
        else
            cout << "Sorry, I can't save him." << endl;
    }

    return 0;
}
 