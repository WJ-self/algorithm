#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int n;

int lowbit(int x){
    return x&(-x);
}

int main(){
    std::cin >> n;
    int x;
    for (int i=0; i<n; i++) {
        std::cin >> x;
        int res = 0;
        while(x){
            x-=lowbit(x);
        }
    }
}