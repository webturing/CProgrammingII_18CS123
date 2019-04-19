#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int x = 123; 3 * x <= 987; x++) {
        int y = 2 * x, z = 3 * x;
        ostringstream oss;
        oss << x << y << z;
        string s = oss.str();
        //cout<<s<<endl;
        sort(s.begin(), s.end());
        if (s == "123456789") {
            cout << x << y << z << endl;
        }
    }
    return 0;
}
