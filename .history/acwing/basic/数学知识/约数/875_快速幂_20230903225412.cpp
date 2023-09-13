#include<bits/stdc++.h>
using namespace std;

int n, a,b,p;



int main() {
    cin >> n;
    while(n--) {
        cin >> a >> b >> p;
        cout << quick_pow(a,b,p) << endl;;
    }
}