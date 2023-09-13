#include<bits/stdc++.h>
using namespace std;

int n;

bool isPrime(int x) {
    if(x < 2) return false;
    for(int i=2; i <= n/i; i++) { 
        // i <= n/i
        // 即 i*i <= n (这种写法有溢出风险)
        // 即 i <= sqrt(n)
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> n;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        bool is_prime = isPrime(x);
        cout << (is_prime?"Yes":"No") <<endl;
    }
    return 0;
}