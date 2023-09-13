#include<bits/stdc++.h>
using namespace std;

void divide(int x){
    if(x < 2) return;
    for(int i=2; i<x; i++) {
        if(x % i == 0) {
            int s=1;
            while(x % i==0){
                x /= i;
                s++;
            }
            printf("%d %d", x, )
        }

    }
}

int main(){
    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        divide(x);
    }
    return 0;
}