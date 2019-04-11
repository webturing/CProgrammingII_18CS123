#include<bits/stdc++.h>

using namespace std;

int main() {
    for (string s; cin >> s;) {
        char max_char = *max_element(s.begin(), s.end());
        for (char c:s) {
            cout << c;
            if (c == max_char)cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}