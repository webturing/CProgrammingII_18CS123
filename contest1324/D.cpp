#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int a = 123; 3 * a <= 987; a++) {
        int b = a * 2, c = 3 * a;
        ostringstream oss;
        oss << a << b << c;
        string s = oss.str();
        sort(s.begin(), s.end());
        if (s == "123456789")
            cout << a << b << c << endl;
    }
    return 0;
}
 