#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<string> v(10);
    for (auto &e:v) {
        getline(cin, e);
    }
    sort(v.begin(), v.end());
    for (auto s:v)
        cout << s << endl;
    return 0;
}