#include<bits/stdc++.h>

using namespace std;

struct PPP {
    string name;
    int A, B, C;

    bool operator<(const PPP &that) const {
        if (A - that.A)return A < that.A;
        if (B - that.B)return B < that.B;
        if (C - that.C)return C < that.C;
        return name < that.name;

    }
};


int main() {
    int n;
    while (cin >> n) {
        PPP N[n];
        for (int i = 0; i < n; i++) {
            cin >> N[i].name >> N[i].A >> N[i].B >> N[i].C;
        }
        PPP *mp = min_element(N, N + n);
        cout << mp->name << " " << mp->A << " " << mp->B << " " << mp->C << endl;
    }
    return 0;
}