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
    vector<int> stk;
    for (int i=1; i<=n; i++) {
        if(t[i] > stk.back()) stk.push_back(t[i]); 
    }
    cout << ans << endl;
    return 0;

}