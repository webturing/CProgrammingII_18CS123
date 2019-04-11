#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    deque<int> A;
    int q;
    cin >> q;
    while (q--) {
        int op;
        cin >> op;
        if (op == 0) {
            int d, x;
            cin >> d >> x;
            if (d == 0)A.push_front(x);
            else if (d == 1)A.push_back(x);
        } else if (op == 1) {
            int p;
            cin >> p;
            cout << A[p] << endl;
        } else if (op == 2) {
            int d;
            cin >> d;
            if (d == 0)A.pop_front();
            else if (d == 1)A.pop_back();
        }
    }

    return 0;
}