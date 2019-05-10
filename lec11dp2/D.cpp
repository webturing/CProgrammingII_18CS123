#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN=30;
LL Q[MAXN][MAXN];
LL cnr(int n,int r){
	if(Q[n][r])return Q[n][r];
	if(n==r||r==0)return Q[n][r]=1;//c(n,n)=c(n,0)=1
	return Q[n][r]=cnr(n-1,r)+cnr(n-1,r-1);
}
int main() {
	cout<<cnr(40,20)<<endl;
	return 0;
}
