#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL cnr(int n,int r){
	if(2*r>n)r=n-r;
	LL ans=1LL;
	for(int i=0;i<r;i++)ans=ans*(n-i);
	for(int i=2;i<=r;i++)ans/=i;
	return ans;
}
int main() {	
	for(int m,n;cin>>m>>n;)
		cout<<cnr(m,n)<<endl;	
	return 0;
}
