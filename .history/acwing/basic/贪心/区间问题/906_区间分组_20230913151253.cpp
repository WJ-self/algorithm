#include<bits/stdc++.h>
using namespace std;
// 区间分组
const int N=1e5+10;
const int MAX=0x3f3f3f3f;
typedef pair<int,int> PII;
PII p[N];
int n,a,b,res,mb = -MAX; //mb: 分界线
int cnt=1,mcnt;
int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p, p+n); //按照左端点排序
    for (int i=0; i<n; i++) {
        int x = p[i].first, y = p[i].second;
        if(x > mb) { //如果产生断点，那么更新mb
            res++;
            mb = y;
            mcnt = max(mcnt, )
        }
        else { //没有产生断点，那么选最小的右端点为mb
            mb = min(mb, y);
            cnt++;
        }
    }
    cout << res;
    return 0;
}