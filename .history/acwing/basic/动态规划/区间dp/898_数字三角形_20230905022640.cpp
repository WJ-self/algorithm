#include<bits/stdc++.h>
using namespace std;

int n,ans;
const int N = 510;
int t[N][N], dp[N][N];


int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++){
            cin >> t[i][j];
        }
    }
    
}