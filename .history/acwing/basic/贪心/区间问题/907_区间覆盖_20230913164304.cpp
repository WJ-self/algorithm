#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
typedef pair<int,int> PII;
PII p[N];
int n,res,a,b,ma,mb;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p, p+n)
}
