#include<bits/stdc++.h>
using namespace std;
void Merge(int *a,int left,int right,int mid){
//merge a[left,mid] and a[mid+1,right]
    int *L=new int[mid-left+2];
    L[mid-left+1]=INT_MAX;
    for(int i=0; i<mid-left+1; i++)L[i]=a[i+left];
    int *R=new int[right-mid+1];
    R[right-mid]=INT_MAX;
    for(int i=0; i<right-mid; i++)R[i]=a[mid+1+i];
    int ll=0,rr=0;
    for(int i=left; i<=right; i++)
        if(L[ll]<=R[rr])
            a[i]=L[ll++];
        else
            a[i]=R[rr++];
    delete[] L;
    delete[] R;
}
void Sort(int *a,int left,int right){
    if(left>=right)return ;
    int mid=(left+right)/2;
    Sort(a,left,mid);//
    Sort(a,mid+1,right);//
    //merge
    Merge(a,left,right,mid);

}
int main(){
    int a[]= {1,3,4,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    Sort(a,0,n-1);
    copy(a,a+n,ostream_iterator<int>(cout," "));
    return 0;
}
