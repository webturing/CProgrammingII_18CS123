#include<bits/stdc++.h>

using namespace std;
struct PPP {
    string name;
    int A, B, C;

};

bool cmp(PPP p, PPP q) {
    if (p.A != q.A)return p.A < q.A;
    if (p.B != q.B)return p.B < q.B;
    if (p.C != q.C)return p.C < q.C;
    return p.name < q.name;
}

int main() {
    int n;
    while (cin >> n) {
        vector<PPP> v(n);
        for (int i = 0; i < n; i++)cin >> v[i].name >> v[i].A >> v[i].B >> v[i].C;
        sort(v.begin(), v.end(), cmp);
        cout << v[0].name << " "
             << v[0].A << " "
             << v[0].B << " "
             << v[0].C << "\n";
    }
    return 0;
}
