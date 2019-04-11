#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e:v)cin >> e;
    sort(v.begin(), v.end());
    for (auto e:v)cout << e << " ";
    cout << endl;
    return 0;

}
