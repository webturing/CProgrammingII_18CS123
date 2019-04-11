#include<bits/stdc++.h>

using namespace std;

int main() {
    stack<char> S;
    string str;
    while (cin >> str) {
        int len = str.size();
        for (int i = 0; i < len; i++) {
            if (S.empty()) {
                S.push(str[i]);
                continue;
            }
            if ((str[i] == ')' && S.top() == '(')) {
                S.pop();
            } else if (str[i] == ']' && S.top() == '[')
                S.pop();
            else if (str[i] == '}' && S.top() == '{')
                S.pop();
            else
                S.push(str[i]);
        }
        if (S.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
