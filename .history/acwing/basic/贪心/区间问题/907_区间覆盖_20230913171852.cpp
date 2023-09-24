#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
typedef pair<int,int> PII;
PII p[N];
int n,res,a,b,ma,mb,s,t;

int main() {
    cin >> s >> t;
    ma = s, mb = s;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p, p+n);
    for(int i=0; i<n; i++) {
        int x = p[i].first, y = p[i].second;
        if(mb >= t) break;
        if(x <= ma && y > ma) {
            mb = max(mb, y);
        }
        else if(x > ma && x <= mb){
            ma = mb;
            res++;
            mb = max(mb,y);
        }
        else {
            cout << -1;
            return 0; 
        }

        
    }
    cout << res;
    return 0;
}
