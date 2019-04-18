#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            cout << x - 4 << " " << 4 << endl;
        } else {
            cout << x - 9 << " " << 9 << endl;
        }
    }

    return 0;
}