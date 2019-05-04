#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

inline int read_int() {
    int x;
    cin >> x;
    return x;
}

int main() {
    int n = read_int();
    n <<= 1;
    for (int p = static_cast<int>(sqrt(n)); p >= 1; p--) {
        if (n % p)continue;
        int q = n / p;
        int a = (q - p + 1) / 2;
        int b = (q + p - 1) / 2;
        if (b > a and a + b == q and b - a + 1 == p)
            cout << a << " " << b << endl;
    }
    return 0;
}