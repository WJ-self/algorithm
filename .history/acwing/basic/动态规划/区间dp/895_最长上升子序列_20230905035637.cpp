#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N], t[N];
int n;

int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> t[i];
    }
    for (int i=1; i<=n; i++) {
        if(t[i] > t[i-1]) dp[i] = dp[i-1] +1;
    }
}