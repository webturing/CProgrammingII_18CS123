#include<bits/stdc++.h>

using namespace std;
//char a[1024*1024*1024];//全局数组可以开辟1G空间 
int main() {
	char b[1024*1024];//单个数组一般在1M左右 
   
    
    char * p=(char*)malloc(sizeof(char)*(1<<30));
	//p指向堆中的1G字节空间的首地址 
	p[0]=0;
	
	free(p);//释放p
	
	char *t=new char;
	//t指向堆中一个字节 
	delete t;//释放t 
	char*q=new char[1<<30];
	//q指向堆中的1G字节空间的首地址 
	delete []q;//释放q
	 
	puts("ok");
	 
    return 0;
}
