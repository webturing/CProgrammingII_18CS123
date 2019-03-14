#include<bits/stdc++.h>
using namespace std;
int Partition(int *a,int left,int right){
    int i=left;
    for(int j=i;j<=right;j++){
        if(a[j]<a[right]){
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[right],a[i]);
    return i;
}
void Sort(int *a,int left,int right){
   if(left>=right)return ;
   int p=Partition(a,left,right);
   //1. swap a[right] into  best place p;
   //2. a[left..p-1]<=a[p]
   //3. a[p+1,right]>a[p]
   Sort(a,left,p-1);
   Sort(a,p+1,right);
}
int main(){
    int a[]= {1,3,4,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    Sort(a,0,n-1);
    copy(a,a+n,ostream_iterator<int>(cout," "));
    return 0;
}
