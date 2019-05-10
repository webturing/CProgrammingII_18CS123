#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[]={1,2,2,2,2,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int k=2;
	int pos=lower_bound(a,a+n,k)-a;//log(N)
	if(pos==n){
		cout<<"Not found!"<<endl;
	}else{
		cout<<"First positin is "<<pos<<endl;
	}
	return 0;
}
