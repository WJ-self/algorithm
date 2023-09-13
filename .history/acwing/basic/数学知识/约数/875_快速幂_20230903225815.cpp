#include<bits/stdc++.h>
using namespace std;

int n, 
long long a,b,p; //

int quick_pow(int a, int b, int p){
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