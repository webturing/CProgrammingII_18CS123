#include<iostream>
#include<algorithm>

using namespace std;

bool cmp2(int a, int b) {
    return a < b;
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    //sort(a,a+n);
    sort(a, a + n, greater<int>());
    // sort(a,a+n,less<int>());
    //sort(a,a+n,cmp2);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    //....
}
