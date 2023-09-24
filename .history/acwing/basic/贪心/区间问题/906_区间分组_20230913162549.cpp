#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
typedef pair<int,int> PII;
priority_queue<int,vector<int>, greater<int>> pq; //每一组的最右端
PII p[N];
int n,a,b;

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        p[i] = {a,b};
    }
    sort(p,p+n); //按左端点排序
    for(int i=0; i<n; i++) {
        int x = p[i].first, y = p[i].second;
        if(pq.empty() || <= pq.top())
        if(x > pq.top()) {
            pq.pop();
            pq.push(y);
        }
        else  {
            pq.push(y);
        }
    }
    cout << pq.size();
    return 0;

}