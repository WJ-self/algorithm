#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
typedef pair<int,int> PII;
PII p[N];
int n,res,a,b,ma,mb,s,t;

int main() {
    cin >> s >> t;
    mb = s;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p, p+n);
    for(int i=0; i<n; i++) {
        int x = p[i].first, y = p[i].second;
        if(x <= mb ) {
            mb = y;
        }
    }
}
