#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
const int md = 7+1e9;
typedef long long LL;
int n;
LL x;


void divide(LL x){
    if(x < 2) return ;
    for (int i=2; i<=x/i; i++) {
        if(x % i==0){
            int s=0;
            while(x % i == 0){
                s++;
                x /= i;
            }
            if(mp.find(i) == mp.end()) mp[i] = s;
            else mp[i] += s;
            if(x>1) mp[i]++;
        }
    }
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        divide(x);
    }
    
    cout << res;
    return 0;
}