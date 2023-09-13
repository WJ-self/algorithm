#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, ans;
int dp[N], t[N];

int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> t[i];
    }
    for (int i=1; i<=n; i++) {
        dp[i] = 1;
        int l=1, r=i-1;
        while(l<r){ // 小于dp[n]的左端点
            int mid = (l+r) >> 1;
            if(t[])
        }
    }
}