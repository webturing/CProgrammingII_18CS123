#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a(9);
    for (auto &e:a)cin >> e;
    int k;
    cin >> k;
    auto p = lower_bound(a.begin(), a.end(), k);
    a.insert(p, k);
    for (auto e:a)cout << e << " ";
    cout << endl;
    return 0;
}