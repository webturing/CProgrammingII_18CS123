#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {6, 6, 1, 3, 3,};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);//quicksort
    //stable_sort(a,a+n);//mergesort
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    int k = unique(a, a + n) - a;
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;

    copy(a, a + k, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
