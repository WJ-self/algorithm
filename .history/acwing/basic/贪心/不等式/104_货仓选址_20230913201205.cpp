#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n;
int a[N];

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.)
    int p = a[n/2];
    int res = 0;
    for (int i=0; i<n; i++) {
        res += abs(p-a[i]);
    }
    cout << res;
    return 0;
}