#include<bits/stdc++.h>

using namespace std;

int f(int k) {
    int a[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int m = 0;
    while (k / 10 != 0) {
        m += a[k % 10];
        k = k / 10;
    }
    m += a[k];
    return m;
}

int main() {
    int n, i, j, q = 0, c;
    cin >> n;
    for (i = 0; i <= 1111; i++) {
        for (j = 0; j <= 1111; j++) {
            c = i + j;
            if (f(i) + f(j) + f(c) == n - 4) q++;
        }
    }
    cout << q;
    return 0;
}