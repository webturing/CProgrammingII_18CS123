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
	int x=3,y=4;
	BinaryPrint(x);
	BinaryPrint(y);

	cout<<endl<<x<<"&"<<y<<"=";
	BinaryPrint(x&y);
	cout<<endl<<x<<"|"<<y<<"=";
	BinaryPrint(x|y);
	cout<<endl<<x<<"^"<<y<<"=";
	BinaryPrint(x^y);
	return 0;
}
