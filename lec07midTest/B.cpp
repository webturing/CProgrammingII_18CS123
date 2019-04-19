#include<bits/stdc++.h>

using namespace std;

//f(17)=1
inline int f(int n) {
    int tot = 0;
    while (n > 0) {
        if (n % 10 == 7)++tot;
        n /= 10;
    }
    return tot;
}

//g(49)=2
inline int g(int n) {
    int tot = 0;
    while (n % 7 == 0) {
        n /= 7;
        ++tot;
    }
    return tot;
}

int main() {
    assert(1 == f(17));
    assert(2 == g(49));
    //ifstream cin("A.in");
    int T;
    cin >> T;
    while (T--) {//O((R-L)*T)=>O(n)
        int L, R;
        cin >> L >> R;
        int tot = 0;
        for (int i = L; i <= R; i++)
            tot += f(i) + g(i);
        cout << tot << endl;
    }
    return 0;
}
