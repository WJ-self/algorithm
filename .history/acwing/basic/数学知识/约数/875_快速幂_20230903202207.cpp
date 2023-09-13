#include<bits/stdc++.h>
using namespace std;

int quick_pow(int a, int n){
    int r = 1;
    while(n) {
        if(n & 1 == 1) r *= a;
        a *= a;
        n = n >> 1;
    }
}

int main() {
    
}