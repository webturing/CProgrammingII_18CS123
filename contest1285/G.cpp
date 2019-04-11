#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    auto tot = 0;
    for (int i = 0; i < a.size() - 1; i++)
        for (int j = a.size() - 2; j >= i; j--)
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ++tot;
            }
    for (auto e:a)cout << e << " ";
    cout << endl << tot << endl;
    return 0;
}