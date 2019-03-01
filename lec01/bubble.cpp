#include<iostream>
#include<cstdlib>
using namespace std;
void print(int *a,int n) {
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
// sort A[from...to] using bubble sort
void sort(int *a,int n,int from,int to) {
	if(from==to)return ;
//creat a skip_window w from a[from]...a[to-1] to swap max
	for(int j=from; j<=to-1; j++) {
		if(a[j]>a[j+1])swap(a[j],a[j+1]);
	}
	sort(a,n,from,to-1);
}
int main() {
	int a[]= {1,3,5,7,9,2,4,6,8,0};
	int n=sizeof(a)/sizeof(a[0]);
	print(a,n);
	sort(a,n,0,n-1);
	print(a,n);

	//....
}
