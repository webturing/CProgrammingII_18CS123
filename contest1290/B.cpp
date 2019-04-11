#include<bits/stdc++.h>

using namespace std;

//O(n*log(m))
int main() {
    int m, n;
    cin >> m >> n;
    vector<int> a(m, 0), b(n, 0);
    for (auto &i:a)cin >> i;
    for (auto &i:b)cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (m < n)swap(a, b);
    auto best = INT_MAX;
    for (auto x:a) {
        auto p = lower_bound(b.begin(), b.end(), x);
        best = min(best, abs(*p - x));
        if (best == 0)break;
    }
    cout << best << endl;
    return 0;
}