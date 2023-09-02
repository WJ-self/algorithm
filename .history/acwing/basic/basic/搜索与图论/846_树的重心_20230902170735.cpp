#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int n;
int h[N], e[N], ne[N], idx;

void add(int a,int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}



int main() {
    memset(h, -1, sizeof(h));
    int x, y;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        add(x, y), add(y, x);
    }
}