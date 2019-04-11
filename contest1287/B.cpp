#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &p : v) cin >> p;
    sort(v.begin(), v.end());

    // copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    set<int> s;
    for (auto p : v) s.insert(p);
    cout << s.size() << endl;
    auto p = s.begin();
    cout << *p;
    for (++p; p != s.end(); ++p) cout << " " << *p;
    cout << endl;
    // copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    return 0;
}