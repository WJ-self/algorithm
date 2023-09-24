#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int t[N];
int n;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> t[i];
    }
    sort(t, t+n);
    long long res=0, w=0;
    for (int i=0; i<n; i++) {
        res+=w;
        w+=t[i];
    }
    cout << res;
    return 0;
}