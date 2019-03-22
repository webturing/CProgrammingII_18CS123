#include<cstring>
#include<iostream>
using namespace std;
//手动模拟字符串转整数 
int main()
{
	char s[100]="-1237";
	//double x;
	
	int t=0;
	for(int i=0,n=strlen(s);i<n;i++){
		t=t*10+(s[i])-'0';
	}
	cout<<t<<endl;
	
	return 0;
}
