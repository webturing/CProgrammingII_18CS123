#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e:v)cin >> e;
    sort(v.begin(), v.end(), greater<int>());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << " " << v[i];
    cout << endl;
    return 0;

}
