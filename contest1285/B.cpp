#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    for (auto p = a.begin(); p != a.end(); ++p) {
        auto q = min_element(p, a.end());
        if (p != q)swap(*p, *q);
    }
    for (auto e:a)cout << e << " ";
    cout << endl;

    return 0;
}

