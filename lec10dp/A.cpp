#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main() {
    vector<LL> F(51, 1);
    for (int i = 3; i < F.size(); i++)F[i] = F[i - 1] + F[i - 2];
    int n;
    cin >> n;
    cout << F[n] << endl;
    return 0;
}