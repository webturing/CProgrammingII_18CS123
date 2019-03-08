# lec02 高级排序

## 复习

### 简单排序  $ (O(n^2)) $

- 选择排序
- 冒泡排序
- 插入排序*
```$c++
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
```
## 高级排序 $O(n \log(n))$

### 归并排序
-*合并两个有序列表*
```$c++
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
```
-递归过程
```$cpp
void Sort(int *a,int left,int right){
    if(left>=right)return ;
    int mid=(left+right)/2;
    Sort(a,left,mid);//
    Sort(a,mid+1,right);//
    //merge
    Merge(a,left,right,mid);

}
```
### 快速排序
-*划分*
```$c++
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
```
-递归过程
```$c++
void Sort(int *a,int left,int right){
   if(left>=right)return ;
   int p=Partition(a,left,right);
   //1. swap a[right] into  best place p;
   //2. a[left..p-1]<=a[p]
   //3. a[p+1,right]>a[p]
   Sort(a,left,p-1);
   Sort(a,p+1,right);
}
```
# 线性时间排序
- 计数排序
- 去重

