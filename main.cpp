#include<bits/stdc++.h>

using namespace std;

int Cross(vector<int> &v) {
    int s = 0;
    for (int i = 1; i < v.size(); i++) {
        s += v[i] * accumulate(v.begin(), v.begin() + i, 0);
    }
    return s;
}
set<int> S;

void dfs(int n, int max, vector<int> &v) {
    if (n == 0) {
        //copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
        //cout << ":";
        //cout << Cross(v) << endl;
        S.insert(Cross(v));
        return;
    }

    for (int i = min(max, n); i >= 1; i--) {
        v.push_back(i);
        dfs(n - i, i, v);
        v.pop_back();
    }
}

int main() {
    int n;
    while (cin >> n) {
        S.clear();
        vector<int> v;
        dfs(n, n, v);
        for (auto s:S)
            cout << s << " ";
        cout << endl;
    }
    return 0;
}