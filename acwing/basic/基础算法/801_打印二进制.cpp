#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10; // 1010
for (int k = 3; k>=0; k--) cout << (n>>k&1)<<" ";
}