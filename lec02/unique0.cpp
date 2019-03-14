#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {6, 6, 1, 3, 3,};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);//quicksort
    //stable_sort(a,a+n);//mergesort
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    int recent = a[0];
    cout << a[0] << " ";
    for (int i = 1; i < n; i++) {
        if (a[i] == recent)continue;
        cout << a[i] << " ";
        recent = a[i];
    }
    return 0;
}
