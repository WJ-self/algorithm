#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
const int md = 7+1e9;
typedef long long LL;
int n,x;

void divide(int x){

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