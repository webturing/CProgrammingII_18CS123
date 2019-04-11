#include <bits/stdc++.h>

using namespace std;
int used[10000] = {0};
int N;
int a[10000];

void dfs(int k) {
    if (k == N) {
        for (int i = 0; i < k; i++)
            if (used[i]) {
                cout << a[i];
            }
        cout << endl;
        return;
    }
    for (int i = 1; i < N; i++)
        if (used[i] == 0) {
            a[k] = i;
            used[i] = 1;
            dfs(k + 1);
            used[i] = 0;
        }
}

int main() {
    cin >> N;
    N += 1;
    dfs(1);

    return 0;
}