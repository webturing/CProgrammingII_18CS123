#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &e:v) cin >> e;
    while (i != n) {
        auto x = min_element(v.begin() + i, v.end());
        int d = x - v.begin();
        swap(v[d], v[i]);
        printf("swap(a[%d], a[%d]):", i, d);
        i++;
        for (int i = 0; i < n - 1; i++)cout << v[i] << " ";
        cout << v[n - 1] << endl;
    }
}