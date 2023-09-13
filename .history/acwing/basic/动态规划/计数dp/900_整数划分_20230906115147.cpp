#include<bits/stdc++.h>
using namespace std;

const int N=1010;
int n,mod=7+1e9;
int dp[N][N]; // 容量（n）=j时，考虑前i个数字
// 例如dp[7][7]可以=1+2+3+1
// 1+2+3:dp[i-1][j]

int main() {
    cin >> n;
    for (int i=0; i<=n; i++)
        dp[i][0] = 1;
    for (int i=1; i<=n; i++) {
        for (int j)
    }
}