#include<bits/stdc++.h>

using namespace std;

int pp(vector<int> &a, int p, int q) {
    int x = a[q];
    int i = p - 1;
    for (int j = p; j <= q - 1; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[q]);
    return i + 1;
}

void quick_sort(vector<int> &a, int p, int q) {
    if (p >= q)return;
    int r = pp(a, p, q);
    quick_sort(a, p, r - 1);
    quick_sort(a, r + 1, q);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    quick_sort(a, 0, n - 1);
    for (auto e:a)cout << e << " ";
    cout << endl;
    return 0;
}