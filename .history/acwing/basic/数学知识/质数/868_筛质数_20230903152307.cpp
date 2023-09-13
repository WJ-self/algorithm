#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
int prime[N];
bool notp[N];
int n, cnt;

void countPrime() {
    if(n < 2) return;
    for(int i=2; i<=n; i++) {
        if(!notp[i]) prime[cnt++] = i;
        for (int j=1)
    }
} 

int main() {
    cin >> n;
    countPrime();
    cout << cnt << endl;
    return 0;
}