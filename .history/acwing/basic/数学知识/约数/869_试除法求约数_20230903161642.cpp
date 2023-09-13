#include<bits/stdc++.h>
using namespace std;

int n,x;
vector<int> fa;

int main() {
    cin >> n;
    while(n--) {
        cin >> x;
        factor(x);
    }    
    return 0;
}