#include<bits/stdc++.h>
using namespace std;

int cnt=0;
const int N = 1e6+10;
int prime[N];
bool notp[N];
int n, cnt;

void countPrime() {
    if(n < 2) return;
    for (int i=2; i<=n; i++) {
        if(!notp[i]) prime[cnt++] = i;
        for(auto p: prime){
            if(p * i>)
        }
    }
} 

int main() {
    cin >> n;
    cout << cnt << endl;
    return 0;
}