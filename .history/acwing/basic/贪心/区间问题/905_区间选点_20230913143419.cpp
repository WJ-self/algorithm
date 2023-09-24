#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int MAX=0x3f3f3f3f;
typedef pair<int,int> PII;
PII p[N];
int n,a,b,res,mb = -MAX;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p, p+n); //按照左端点排序
    for (int i=0; i<n; i++) {
        int x = p[i].first, y = p[i].second;
        if(x > mb) res++;
        
    }
}