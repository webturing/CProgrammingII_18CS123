#include<bits/stdc++.h>
using namespace std;
const int MAXN=50+1;
typedef long long LL;
LL F[MAXN];
LL f(int n) {
	if(F[n]!=0)return F[n];
	if(n==1 or n==2)return F[n]=1LL;
	return F[n]=f(n-1)+f(n-2);
}
int main() {
	int n=20;
	//cin>>n;
	cout<<f(n)<<endl;
	return 0;
}
