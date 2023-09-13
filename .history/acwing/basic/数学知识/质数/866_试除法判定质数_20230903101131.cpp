#include<bits/stdc++.h>
using namespace std;

int n;

void isPrime(int x) {
    if(x <= 1) {
        cout << "No" <<endl;
        return;
    }
    else if(x == 2) {
        cout << "Yes" << endl;
        return;

    }
    int ed = ceil(pow(x, 0.5));
    for (int i=2; i<=ed && i<x; i++){
        if(x % i == 0 ) {
            cout << "No" <<endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main() {
    cin >> n;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        isPrime(x);
    }
    return 0;
}