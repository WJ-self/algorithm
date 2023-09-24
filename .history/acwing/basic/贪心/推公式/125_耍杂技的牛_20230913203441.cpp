#include<bits/stdc++.h>
using namespace std;

const int N = 5e4+10;

struct Cow{
    int w,s;
    bool operator < (const Cow& c) const{
        return (w+s) < (c.w + c.s);
    }
}cow[N];
int n;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> cow[i].w >> cow[i].s;
    }
    sort(cow, cow+n);
    int res = 0, sum =0;
    for (int i=0; i<n; i++) {
        if(cow[i].s < sum) {

        }
        sum += 
    }
}