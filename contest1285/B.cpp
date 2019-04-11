#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    for (auto i = 0; i < a.size() - 1; i++) {
        swap(a[i], *min_element(a.begin() + i , a.end()));
    }
    for (auto e:a)cout << e << " ";
    cout << endl;

    return 0;
}

