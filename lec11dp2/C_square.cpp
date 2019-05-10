#include<bits/stdc++.h>
using namespace std;

int main() {
		int n=1000005;
		cin>>n;
		for(int i=1;i<=n;i++){//O(n^2/2)
			for(int j=i+1;j<=n;j++){
				int s=(i+j)*(j-i+1)/2;
				if(s==n){
					cout<<i<<" "<<j<<endl;
				}
			}
		}
	return 0;
}
