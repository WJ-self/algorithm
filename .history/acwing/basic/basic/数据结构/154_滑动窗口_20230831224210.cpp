#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
int q[N], a[N]; // save index

int main() {
    int n,k;
    cin >> n >> k;
    int h=0, t=-1; //head, tail
    // 维护最小值
    for (int i=0; i<n; i++) {
        cin >> a[i];
        while(t!=-1 && a[q[t]] >= a[i]) t--;
        q[++t] = i;
        //检查队头是否滑出了窗口
        if(q[h] < i-k+1) h++;
        if(i > k-1)
    }
}