#include<bits/stdc++.h>
using namespace std;
void Sort(int *a,int left,int right){
// sort(a,left,right-1);
//insert a[right] into a[left,right-1]
    if(left>right)return ;
    Sort(a,left,right-1);
    for(int j=right-1; j>=left; j--){
        if(a[j]<=a[j+1])return ;
        swap(a[j],a[j+1]);
    }

}
int main(){
    int a[]= {1,3,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    Sort(a,0,n-1);
    copy(a,a+n,ostream_iterator<int>(cout," "));
    return 0;
}
