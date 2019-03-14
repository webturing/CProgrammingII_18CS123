#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {6, 6, 1, 3, 3,};
    int n = sizeof(a) / sizeof(a[0]);
    int b[10] = {0};

    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        if (b[i] != 0) {
            //  for(int j=0;j<b[i];j++)
            cout << i << " ";
        }
    }

    return 0;
}
