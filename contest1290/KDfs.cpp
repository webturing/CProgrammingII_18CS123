#include<bits/stdc++.h>

using namespace std;
int n, m, flag = 0;
char s[500][500];
bool use[500][500];

void dfs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m || s[x][y] == 'x' || use[x][y])
        return;
    if (s[x][y] == 'L') {
        use[x][y] = true;
        flag = 1;
        return;
    }
    use[x][y] = true;
    dfs(x + 1, y);
    dfs(x, y + 1);
    dfs(x - 1, y);
    dfs(x, y - 1);
}

int main() {

    int Startx, Starty;
    while (cin >> n >> m) {
        flag = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                use[i][j] = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> s[i][j];
                if (s[i][j] == 'S') {
                    Startx = i;
                    Starty = j;
                }
            }
        }
        dfs(Startx, Starty);
        flag ? cout << "I saved him." << endl : cout << "Sorry, I can't save him." << endl;
    }
}