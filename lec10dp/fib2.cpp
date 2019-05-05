#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
LL F[51];

int main() {
    F[1]=F[2]=1;
    for(int i=3;i<=50;i++)F[i]=F[i-1]+F[i-2];//O(n)
    cout<<F[50]<<endl;
    return 0;
}