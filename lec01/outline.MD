第一讲: 课程概述



# 课程概述：

- 选课 :  oj.ahstu.cc  图灵慕课
- 上课时间调整： 组3 组1 周五 7-8 敏A502 
- https://github.com/webturing/CProgrammingII_18CS123
- 


#内容：

## C的高级部分：
- 指针

- 文件

- 结构体、联合体、枚举

## 算法基础：

### 基础的数据结构实现（STL)
- 链表
- 栈
- 队列
### 基础算法
- 枚举
- 搜索
- 贪心
- 动态规划
- 图
- 数学（数论，几何，矩阵）
## 上课内容：（排序，查找）
### 排序规则（函数指针，仿函数） 
- `qsort(void* offset, int len,size_t eachSize,int (*func)( const void*a,const void*b))`
```C++
#include<stdlib.h> //#include<cstdlib>

int cmp(const void *a ,const void*b){
	int *ia=(int*)(a);
    int *ib=(int*)(b);
    return *ia - *ib;// increase
}
main(){
    int a[]={1,3,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    qsort(a,n,sizeof(a[0]),cmp);
    //....
}
```
- sort/stable_sort(startPos,endPos)
### 

```C++
#include<algorithm>
bool cmp(int a,int b){
    return a<b;//less<int>();    
}
main(){
    int a[]={1,3,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    sort(a,a+n,greater<int>());
    sort(a,a+n,less<int>());
    sort(a,a+n,cmp2);
}
```

## 排序算法 (循环不变式及分析)

### 平方排序$O(n^2)$

- 选择排序: 
- 冒泡排序
- 插入排序
### 亚平方排序$ O(n\log{n})$
- 归并排序
- 快速排序
- 堆排序
### 特定数据集工作的线性排序算法$O(n)$
- 基数排序

- 桶排序

### 其他排序：希尔排序
