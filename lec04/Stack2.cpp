#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
//3 4 + 15 6 * /

int main() {
	stack<double> S;
	string s;
	while(cin>>s) {
		if(s=="+"||s=="-"||s=="*"||s=="/") {
			double b=S.top();
			S.pop();
			double a=S.top();
			S.pop();
			if(s=="+")S.push(a+b);
			
		} else {
			double x;
			istringstream iss(s);
			iss>>x;
			S.push(x);
		}
	}
	cout<<S.top()<<endl;
	return 0;
}
