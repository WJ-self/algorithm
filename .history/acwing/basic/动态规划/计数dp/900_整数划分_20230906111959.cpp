#include<bits/stdc++.h>
using namespace std;

const int N=1010;
int n,mod=7+1e9;
int dp[N], vw[N];

int main() {
    cin >> n;
    dp[1] = 1;
    for (int i=2; i<=n; i++) { //总和
        for (int j=1; j<=i; j++) { // 拆分的数字
            for (int k=0; k*j <= i; k++) { //拆分数字的倍数
                dp[i] = max(dp[i], dp[i-k*j]+)
            }
        }
    }
}