#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1010;
typedef long long LL;
LL F[MAXN] = {0, 2, 3};


int main() {
    int n = 20;
    cin >> n;
    for (int i = 3; i <= n; ++i)
        F[i] = F[i - 1] + F[i - 2];
    cout << F[n] << endl;
    return 0;
}