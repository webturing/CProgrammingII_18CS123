#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
LL F[51];

LL fib(int n) {//
    if(F[n]!=0)return F[n];//
    if (n == 1)return F[n]=1;
    if (n == 2)return F[n]=1;
    return F[n]=fib(n - 1) + fib(n - 2);
}

int main() {

    for (int i = 1; i <= 100; i++) {
        LL start = clock();
        fib(i);
        LL end = clock();
        cout << "T(" << i << ")=" << (end - start) * 1e-6 << endl;
    }
    return 0;
}