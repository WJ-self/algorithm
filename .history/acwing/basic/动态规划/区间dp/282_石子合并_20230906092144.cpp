#include<bits/stdc++.h>
using namespace std;

const int N = 310;
int n, a[N], s[N], dp[N][N];

int main() {
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        s[i] = s[i-1]+a[i];
    }

    for (int len = 1; len <= n; len++) { //区间长度
        for (int i=1; i<=n-len; i++) { //区间起始
            int j = i+len-1; //区间终止
            if(len == 1) { //i==j
                dp[i][j] = 0;
                continue;
            }
            
        }
    }
}