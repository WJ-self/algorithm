#include<bits/stdc++.h>
using namespace std;
const int N=3e5+10;
int a[N], s[N]; // a[i]=c i:离散化坐标; c:加上的值; sn: an前缀和
vector<int> alls; // 所有索引(包括插入和查询的两端)；去重排序

typedef pair<int, int> PII;
vector<PII> adds;//{原坐标, 该坐标上需要加的值}
vector<PII> query;//{查询区间左端点, 查询区间右端点}


int find(int x) { //原坐标x的离散化坐标 (二分法)
    int l = 0, r = alls.size()-1;
    while(l<r){
        int mid = l+r >> 1;
        if(alls[mid] >= x) r = mid;
        else l = mid+1;
    }
    return r + 1;//+1:前缀和从1开始

}
int main(){
    int n,m,x,c,l,r;
    std::cin >> n >> m;
    // 输入原坐标和加的值
    for(int i=0; i<n; i++){
        std::cin >> x >> c;
        adds.push_back({x,c});
        alls.push_back(x);
    }    
    // 输入查询区间
    for(int i=0; i<m; i++) {
        std::cin >> l >> r;
        query.push_back({l,r});

    }
    // 所有索引(alls)去重排序
    set<int> st(alls.begin(), alls.end());
    alls.assgin(st.begin(), st.end());
    sort(alls.begin(), alls.end());
    //执行前n次插入操作
    for(auto item: adds){
        int x = find(item.first);
        a[x] = item.second;
    }
    //前缀和
    for(int i=1; i<=alls.size(); i++) s[i]=s[i-1]+a[i];
    //查询
    for(auto item: query){
        int l = find(item.first);
        int r = find(item.second);
        printf("%d\n",s[r]-s[l]);
    }
    return 0;

}