#include<bits/stdc++.h>
using namespace std;

int n;

void isPrime(int x) {
    int ed = ceil(pow(x, 0.5));
    for (int i=1; i<=ed; i++){
        if(x % i == 0) {
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