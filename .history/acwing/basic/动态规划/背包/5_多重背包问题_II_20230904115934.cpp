#include<bits/stdc++.h>
using namespace std;

const int M = 2e6+10;
int N,V,a,b,v[M],w[M],s,idx;
int dp[M]; // 背包容量为i时的最大价值

int main() {
    cin >> N >> V;
    for (int i=1; i<=N; i++) {
        cin >> a >> b >> s;
        while (s--){
            v[idx] = a, w[idx++] = b;
        }
    }
    for (int i=1; i<=N; i++){

    }
}