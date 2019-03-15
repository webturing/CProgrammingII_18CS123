#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	for(int i=0;i<1000;i++){
		v.push_back(i);
	
	} 
		copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
		cout<<endl;
    return 0;
}
