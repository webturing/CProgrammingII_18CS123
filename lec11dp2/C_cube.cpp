#include<bits/stdc++.h>

using namespace std;

//立方算法  1秒只能解决n<=1000
int main() {
    int n = 10005;
    for (int i = 1; i <= n / 2; i++) {
        for (int j = i + 1; j <= n; j++) {
            int s = 0;
            for (int k = i; k <= j; k++)
                s += k;
            if (s == n) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}
