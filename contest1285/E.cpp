#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    while (n--) {
        int t;
        cin >> t;
        auto p = lower_bound(a.begin(), a.end(), t);
        a.insert(p, t);
    }
    for (auto e:a)cout << e << " ";
    cout << endl;
    return 0;
}