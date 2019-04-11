#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    for (int i = 0; i < n - 1; i++) {
        auto k = min_element(a.begin() + i, a.end());
        swap(a[i], *k);
    }

    cout << a[0];
    for (int i = 1; i < a.size(); i++)
        cout << " " << a[i];
    cout << endl;
    return 0;

}
