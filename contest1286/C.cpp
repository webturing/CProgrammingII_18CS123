#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0, j = 0;
    if (s1 == s2) {
        cout << 0 << endl;
        return 0;
    }
    while (s1[i] == s2[j]) {
        i++;
        j++;
    }
    cout << s1[i] - s2[j] << endl;
}