#include<bits/stdc++.h>
using namespace std;

const int N = 310;
int v[N],s[N]; // v:各个重量，s:前缀和
int dp[N][N];// dp[i][j]: 区间i->j的最小合并代价
int n;

int main(){
    cin>>n;
    memset(dp, 0x3f, sizeof dp);                //
    for (int i=1; i<=n; i++) {
        cin >> v[i];
        s[i] = s[i-1]+v[i];
    }

    for(int len = 1; len<=n; len++) {           //区间长度
        for (int i = 1; i+len-1 <= n; i++) {    //区间起点
            int j = i+len-1;                    //区间终点

            if(len == 1) {                      //初始化
                dp[i][j] = 0;
                continue;
            }

            for(int k=i; k<=j; k++) {
                dp[i][j] = min(dp[i][k] + dp[k+1][j] + s[j]-s[i-1], dp[i][j]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}