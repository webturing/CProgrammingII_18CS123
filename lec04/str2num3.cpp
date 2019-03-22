#include<cstring>
#include<iostream>
#include<sstream>
using namespace std;
//istringstream
int main()
{
	string s="+123     -456";
	istringstream iss(s);
	int x,y;
	iss>>x>>y;
	//cin>>x>>y; 
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}
