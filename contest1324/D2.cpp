#include<bits/stdc++.h>

using namespace std;

const int n = 10;
int a[n];
bool used[n];

void dfs(int k) {
    if (k == n) {
        int x = a[1] * 100 + a[2] * 10 + a[3];
        int y = a[4] * 100 + a[5] * 10 + a[6];
        int z = a[7] * 100 + a[8] * 10 + a[9];
        if (y == 2 * x && z == 3 * x) {
            cout << x << y << z << endl;
        }
        return;
    }
    for (int i = 1; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            a[k] = i;
            dfs(k + 1);
            used[i] = false;
        }
    }
}

int main() {
    dfs(1);
    return 0;
}
 