#include<iostream>
#include<cstdlib>
using namespace std;
int cmp(int *a,int *b){
	return *a - *b;
}
void print(int *a,int n){
	for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;
}
void sort(int *a,int n,int (*cmp)(int*a,int *b)){
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i+1;j<n;j++){			
			if(cmp(a+j,a+k)<0){k=j;}
		}
		if(k!=i)swap(a[i],a[k]);
		print(a,n);//debug
	}
}
int main(){
    int a[]={1,3,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
	print(a,n);
	sort(a,n,cmp);
	print(a,n);
    
    //....
}
