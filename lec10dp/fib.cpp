#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int fib(int n) {//O(a^n) a=1.6
    if (n == 1)return 1;
    if (n == 2)return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout<<pow(1.01,365)<<endl;
    cout<<pow(0.99,365)<<endl;
    cout<<pow(1.6,60)/3600/24/366<<endl;//T(100) year
    for (int i = 1; i <= 100; i++) {
        LL start = clock();
        fib(i);
        LL end = clock();
        cout << "T(" << i << ")=" << (end - start) * 1e-6 << endl;
    }
    return 0;
}