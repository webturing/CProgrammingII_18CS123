#include<cstring>
#include<iostream>
using namespace std;
//sscanf
int main()
{
	char s[100]="-1237";
	int x;
	sscanf(s,"%d",&x);
	cout<<x<<endl;
	char t[100]="+123.579e-2";
	double y;
	sscanf(t,"%lf",&y);
	cout<<y<<endl;
	return 0;
}
