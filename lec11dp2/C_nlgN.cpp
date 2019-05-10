#include<bits/stdc++.h>
using namespace std;
void print(int *a,int n){
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
typedef long long LL;
int main() {
		int n=100005;
		LL a[n+1]={0};
		for(int i=1;i<=n;i++)a[i]=i;
		LL b[n+1]={0,1};
		for(int i=2;i<=n;i++)
		b[i]=b[i-1]+a[i];
		
		for(int i=0;i<=n;i++){
			LL x=b[i];
			LL key=x+n;
			//cout<<"x="<<x<<" key="<<key<<endl;
			int pos=lower_bound(b+i+2,b+n+1,key)-b;
			if(pos<n+1 and b[pos]==key){
				cout<<i+1<<" "<<pos<<endl;
			}			
		}
		
	return 0;
}
