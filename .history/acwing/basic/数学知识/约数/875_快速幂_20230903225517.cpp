#include<bits/stdc++.h>
using namespace std;

int n, a,b,p;

int quick_pow(int a, int b, int p){
    int r = 1;
    while(b) {
        if(b & 1 == 1) r = (r*a)
    }
}

int main() {
    cin >> n;
    while(n--) {
        cin >> a >> b >> p;
        cout << quick_pow(a,b,p) << endl;;
    }
}