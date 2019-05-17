#include<bits/stdc++.h>
using namespace std;
void BinaryPrint(int n) {
	cout<<setw(5)<<n<<"(10) =";
	for(int i=31; i>=0; i--) {
		if((i+1)%8==0)cout<<" ";
		cout<<((n>>i)&1);
	}
	cout<<"(2)"<<endl;
}
int main() {
	int n;
	while(cin>>n)
	BinaryPrint(n);
	return 0;
}
