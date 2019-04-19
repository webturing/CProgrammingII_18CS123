#include<bits/stdc++.h>

using namespace std;

int read_int() {
    int x;
    cin >> x;
    return x;
}

bool prime(int n) {
    if (n == 2)return true;
    if (n < 2 || (n & 1) == 0)return false;
    for (int c = 3; c <= n / c; c += 2)
        if (n % c == 0)return false;
    return true;
}

int main() {
    assert(0 == prime(9));
    assert(1 == prime(17));
    int T = read_int();
    while (T--) {
        int n = read_int();
        for (int p = 4; p <= (n >> 1); p++) {
            if (!prime(p) && !prime(n - p)) {
                cout << p << " " << n - p << endl;
                break;
            }
        }
    }
    return 0;
}
