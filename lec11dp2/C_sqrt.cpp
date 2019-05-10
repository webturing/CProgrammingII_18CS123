#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 1000005;
    //cin>>n;
    int m = 2 * n;
    for (int p = sqrt(m); p >= 1; p--) {
        if (m % p != 0)continue;
        int q = m / p;
        int i = (q - p + 1) / 2;
        int j = (q + p - 1) / 2;
        if ((i + j) * (j - i + 1) == m and j >= i + 1)
            cout << i << " " << j << endl;

    }
    return 0;
}
