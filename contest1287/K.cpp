#include <bits/stdc++.h>

using namespace std;

int main() {

    deque<int> values;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        values.push_back(t);
    }

    deque<int> s;
    while (!values.empty()) {
        s.push_front(values.back());
        values.pop_back();
        if (values.empty()) break;
        if (s.size() >= 2) {
            s.push_front(s.back());
            s.pop_back();
        }
    }

    cout << n << endl;
    for (auto i : s) cout << i << " ";
    cout << endl;

    return 0;
}