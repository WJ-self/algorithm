#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
typedef pair<int,int> PII;
PII p[N];
int n,res,a,b,ma,mb,s,t;
// ma:目前的左端点
// mb:目前最大的右端点

int main() {
    cin >> s >> t;
    ma = s, mb = s;
    res = 1;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p, p+n);
    for(int i=0; i<n; i++) {
        int x = p[i].first, y = p[i].second;
        if(mb >= t) break;
        if(x <= ma && y > ma) { //该区间左边不超过实际左端点，右边超过了实际左端点
            mb = max(mb, y);
        }
        else if(x > ma && x <= mb){ //该区间
            ma = mb;
            res++;
            mb = max(mb,y);
        }
        else if(x > mb){
            cout << -1;
            return 0;
        }
    }
    if(mb < t) cout << -1;
    else cout << res;
    return 0;
}
