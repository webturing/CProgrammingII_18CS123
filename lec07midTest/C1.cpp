#include<bits/stdc++.h>

using namespace std;

int read_int() {
    int x;
    cin >> x;
    return x;
}

int main() {
    int T = read_int();
    while (T--) {
        int n = read_int();
        if (n & 1) {
            cout << 9 << " " << n - 9 << endl;
        } else {
            cout << n - 4 << " " << 4 << endl;
        }
    }
    return 0;
}
