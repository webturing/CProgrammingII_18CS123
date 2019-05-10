#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN=1010;
const LL MOD=1000000007;
LL a[MAXN];//a[n]长度n 以0开头的合法串的个数 
LL b[MAXN];//b[n]长度n 以1开头的合法串的个数 
int main() {
	int n=1000;
	cin>>n;
	a[1]=1;
	b[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=(a[i-1]+b[i-1])%MOD;
		b[i]=a[i-1];
	}
	cout<<(a[n]+b[n])%MOD<<endl; 
	return 0;
}
