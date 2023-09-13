#include<bits/stdc++.h>
using namespace std;

int n;
typedef long long LL; //注意题目数据范围
LL a,b,p; 


LL quick_pow(LL a, LL b, LL p){
    int r = 1;
    while(b) {
        if(b & 1 == 1) r = r*a % p;
        a = a*a % p;
        b >>= 1;
    }
    return r;
}

int main() {
    cin >> n;
    while(n--) {
        cin >> a >> b >> p;
        cout << quick_pow(a,b,p) << endl;;
    }
}