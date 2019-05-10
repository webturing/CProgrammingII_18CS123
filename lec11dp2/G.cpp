#include<bits/stdc++.h>
using namespace std;
int B[5]= {1,2,4,5,10};
const int MAXN=1000000+10;
int dp[MAXN];
void print(int n) {
	for(int i=1; i<=n; i++)cout<<dp[i]<<" ";
	cout<<endl;
}
int main() {
	int n=20;
	//cin>>n;
	for(int i=1; i<=n; i++)dp[i]=i; //
	print(n);
	for(int i=0; i<5; i++)dp[B[i]]=1;
	print(n);
	for(int i=3; i<=n; i++) {
		if(i>=1) dp[i]=min(dp[i],dp[i-1]+1);//1
		if(i>=2) dp[i]=min(dp[i],dp[i-2]+1);//2
		if(i>=4) dp[i]=min(dp[i],dp[i-4]+1);//4
		if(i>=5) dp[i]=min(dp[i],dp[i-5]+1);//5
		if(i>=10) dp[i]=min(dp[i],dp[i-10]+1);//10
	}
	print(n);
	cout<<dp[n]<<endl;
	return 0;
}
