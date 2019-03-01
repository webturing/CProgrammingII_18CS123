#include<iostream>
#include<cstdlib>
using namespace std;
int cmp(const void *a ,const void*b){
	int *ia=(int*)(a);
    int *ib=(int*)(b);
    return *ia - *ib;// increase
}
int main(){
    int a[]={1,3,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    qsort(a+2,n-2,sizeof(a[0]),cmp);
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;
    //....
}
