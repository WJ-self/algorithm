#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
const int md = 7+1e9;
typedef long long LL;
int n,x;


void divide(int x){
    if(x < 2) return ;
    for (int i=2; i<=x/i; i++) {
        if(x % i==0){
            int s=0;
            while(x % i == 0){
                s++;
                x /= i;
            }
            if(mp.find(i) == mp.end()) mp[i] = s
            else 
        }

    }
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        divide(x);
    }
    vector<int,int> vec(mp.begin(), mp.end());
    int res = 1;
    for (int i=0; i<vec.size(); i++) {
        res *= (vec[i].second+1);
    }
    cout << res;
    return 0;
}