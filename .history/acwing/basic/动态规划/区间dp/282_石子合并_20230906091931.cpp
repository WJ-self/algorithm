#include<bits/stdc++.h>
using namespace std;

const int N = 310;
int n, a[N], s[N];

int main() {
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        s[i] = s[i-1]+a[i];
    }

    for (len = 1)
}