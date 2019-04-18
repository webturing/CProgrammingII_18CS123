#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
LL MOD = 1000000007L;


inline bool prime(int n) {
    if (n == 2)return true;
    if (n < 2 || n % 2 == 0)return false;
    for (int i = 3; i <= n / i; i += 2)
        if (n % i == 0)return false;
    return true;
}

inline int log(int n, int base) {
    if (n < base)return 0;
    return 1 + log(n / base, base);
}

int main() {
    int n;
    cin >> n;
    map<int, int> M;
    M[2] = log(n, 2);
    for (int i = 3; i <= n; i += 2) {
        if (prime(i))
            M[i] = log(n, i);
    }

    LL ans = 1LL;
    for (auto m:M) {
        for (int i = 1; i <= m.second; i++)//如果指数很大，可以用快速幂
            ans = (ans * m.first) % MOD;
    }
    cout << ans << endl;
    return 0;
}