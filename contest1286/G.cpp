#include<bits/stdc++.h>

using namespace std;

void merge_two(vector<int> &v, int p, int mid, int q) {
    vector<int> left(v.begin() + p, v.begin() + mid + 1);
    vector<int> right(v.begin() + mid + 1, v.begin() + q + 1);
    left.push_back(INT_MAX);
    right.push_back(INT_MAX);
    int ll = 0, rr = 0;
    for (int i = p; i <= q; i++) {
        if (left[ll] <= right[rr]) {
            v[i] = left[ll++];
        } else {
            v[i] = right[rr++];
        }
    }
}

void merge_sort(vector<int> &a, int p, int q) {
    if (p >= q)return;
    int mid = (p + q) >> 1;
    merge_sort(a, p, mid);
    merge_sort(a, mid + 1, q);
    merge_two(a, p, mid, q);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e:a)cin >> e;
    merge_sort(a, 0, n - 1);

    cout << a[0];
    for (int i = 1; i < a.size(); i++)
        cout << " " << a[i];
    cout << endl;
    return 0;

}
