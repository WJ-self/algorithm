#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
const int md = 7+1e9;
typedef long long LL;
int n;
int b;


void divide(int x){
    if(x < 2) return ;
    for (int i=2; i <= x/i; ++i) {
        while(x%i == 0){
            mp[i] ++;
            x /= i;
        }
        if(x>1) mp[x]++;
    }
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> b;
        for (int i=2; i <= b/i; ++i) {
        while(x%i == 0){
            mp[i] ++;
            x /= i;
        }
        if(b>1) mp[b]++;
    }
    }
    LL res=1;
    for(auto i:mp) res = res * (i.second+1) % md;
    cout << res;
    return 0;
}