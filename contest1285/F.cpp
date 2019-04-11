#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    for (int i = 0; i < n; i++) {
        auto pos = lower_bound(a.begin(), a.begin() + i, a[i]);
        if (pos != a.begin() + i) {
            a.insert(pos, a[i]);
            a.erase(a.begin() + i + 1);
        }
        cout << a[0];
        for (int i = 1; i < a.size(); i++)
            cout << " " << a[i];
        cout << endl;
    }
    return 0;
}
