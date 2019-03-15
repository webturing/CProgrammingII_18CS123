
#include<cstdio>

using namespace std;
//在本人环境中
//int c[20000][20000]; //全局数组能开到20000*20000
int main() {
    int b[1024 * 505];
   int b2[700 * 700];
   char a[4 * 518028];
   int b1[500000]; //5*10^5  函数中的char数组最大能开4*518028，int最大能开到518028。
   static int c[20000][20000]; //static能开到10^7*10^7。       注意 static和 全局开的是同一块空间
    printf("1");
};
