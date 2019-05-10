# lec03

## 复习

### 高级排序 $O(n\log{n})$
- 归并排序：平均复杂度$O(n\log{n})$,最坏复杂度$O(n\log{n})$
- 快速排序：平均复杂度$O(n\log{n})$,最坏复杂度$O(n^2)$,实际比归并快4倍+
- 堆排序（树结构）
- 希尔排序

### 线性时间排序 $O(n)$
- 计数排序
- 桶排序



## 线性表(数组表)
## 数组//容量不可改变
### 静态数组 //栈分配，无需销毁
- 全局数组 较大 //全局变量，全局数组，静态数组（static）则是开在全局区（静态区）（static）。大小为2G，所以能够开的很大。
- 局部数组 较小 //函数内申请的变量，数组，是在栈（stack）中申请的一段连续的空间。栈的默认大小为2M或1M，开的比较小。
### 动态数组 //必须手动释放 否则会导致内存泄漏leak

//malloc、new出的空间，则是开在堆（heap）的一段不连续的空间。理论上则是硬盘大小

- C风格  malloc/free
- C++ 风格  new /delete

## STL 动态数组
[vector]: https://zh.cppreference.com/w/cpp/container/vector

##  //可以改变容量，也也无需手动销毁
### 构造器：
- vector<int> a; //
- vector<int> a(10);
- vector<int> a(10,1);
- vector<int> b(a.begin(),a.end());
### 修改器
- 增加 push_back/insert
- 删除 pop_back/erase
- 修改 a.at(pos)  or a[pos]
###数组算法
- 排序 sort/stable_sort
- 查找:find/binary_search/lower_bound/upper_bound
- 拷贝: copy/fill
  

