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
    }
    if(x>1) mp[x]++;
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> b;
        divide(b);
    }
    LL res=1;
    for(auto i:mp) {
        LL psum = 0;
        LL t=1;
        int p=i.first, a=i.second;

        while(a--) t = (t*p + 1) % md;
        res = res * ;
    }
    cout << res;
    return 0;
}