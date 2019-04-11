#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a(10);
    for (auto &e:a)cin >> e;
    for (int i = 0; i < a.size() - 1; i++)
        for (int j = a.size() - 2; j >= i; j--)
           if(a[j]>a[j+1])swap(a[j], a[j + 1]);
    for (auto e:a)cout << e << " ";
    cout << endl;
    return 0;
}