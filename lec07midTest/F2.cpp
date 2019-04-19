#include<bits/stdc++.h>

using namespace std;

struct PPP {
    string name;
    int A, B, C;

    bool operator<(const PPP &that) const {
        if (A != that.A)return A < that.A;
        if (B != that.B)return B < that.B;
        if (C != that.C)return C < that.C;
        return name < that.name;
    }
};

int main() {
    int n;
    while (cin >> n) {
        vector<PPP> v(n);
        for (auto &e:v)cin >> e.name >> e.A >> e.B >> e.C;
        auto p = *min_element(v.begin(), v.end());
        cout << p.name << " " << p.A << " " << p.B << " " << p.C << "\n";
    }
    return 0;
}
