#include<iostream>
#include<cstdlib>

using namespace std;

void print(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// sort A[from...to]
void sort(int *a, int n, int from, int to) {
    if (from == to) return;
///select mininum element A[k]  swap a[k]<=>a[from]
    int k = from;
    for (int j = from + 1; j <= to; j++)
        if (a[j] < a[k])k = j;
    swap(a[k], a[from]);
    sort(a, n, from + 1, to);
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    sort(a, n, 0, n - 1);
    print(a, n);

    //....
}
