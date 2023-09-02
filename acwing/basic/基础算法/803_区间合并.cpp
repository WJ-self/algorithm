#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
vector<PII> segs;
int n,l,r;

int merge(vector<PII>& segs){
    sort(segs.begin(), segs.end());//先按照first排序，再按照second
    int st = 2e9, ed = -2e9;
    int res = 0;
    for(auto item: segs){
        if(item.first > ed) { // 新的区间
            res++;
            st = item.first;
            ed = item.second;
            continue;
        } else { // 包含/有交集
            ed = max(ed, item.second);
        }
    }
    if (st!=2e9) return res;
    return 0;
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> l >> r;
        segs.push_back({l,r});
    }
    printf("%d",merge(segs));
    return 0;
}