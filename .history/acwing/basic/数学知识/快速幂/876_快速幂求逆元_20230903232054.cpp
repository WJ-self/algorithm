#include<bits/stdc++.h>
using namespace std;

int n;
typedef long long LL;
LL a,p;

LL quick_pow(LL a, LL p, LL m){
    LL r = 1;
    while(p) {
        if(p & 1 == 1) r = r*a % m;
        
    }
}

int main() {
    cin >> n;
    while(n--) {
        cin >> a >> p;
        if(a % p) {
            cout << "impossible" << endl;
        }
        cout << quick_pow(a,p-2,p) << endl;;
    }
    return 0;
}