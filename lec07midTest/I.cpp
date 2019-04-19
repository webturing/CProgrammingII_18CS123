#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
const LL MOD = 100000007LL;

bool prime(int n) {
    if (n == 2)return true;
    if (n < 2 || (n & 1) == 0)return false;
    for (int c = 3; c <= n / c; c += 2)
        if (n % c == 0)return false;
    return true;
}

inline int log(int n, int base) {
    int tot = 0;
    while (n >= base)n /= base, ++tot;
    return tot;
}

int main() {
    int n = 100;
    map<int, int> primes;
    primes[2] = log(n, 2);
    for (int i = 3; i <= n; i += 2) {
        if (prime(i)) {
            primes[i] = log(n, i);
        }
    }
    LL ans = 1LL;
    for (auto p:primes) {
        for (int i = 0; i < p.second; i++)
            ans = (ans * p.first) % MOD;
    }
    cout << ans << endl;
    return 0;
}
