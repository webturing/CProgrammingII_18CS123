#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& v){
	for(int i=v.size()-1;i>=0;i--)
	cout<<v[i];
	cout<<endl;
}
int main() {
	int n=50;
	vector<int> v(1,1);//s=n!
	print(v);
	for(int i=2;i<=n;i++){
		int sc=0;
		for(int j=0;j<v.size();j++){
			int temp=v[j]*i+sc;
			v[j]=temp%10;
			sc=temp/10;
		}	
		while(sc){
			v.push_back(sc%10);
			sc/=10;
		}
	}
	print(v);
	return 0;
}
