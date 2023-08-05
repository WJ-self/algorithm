#include<bits/stdc++.h>
using namespace std;
const int N = 7;
int a[N]; // 值, 在这里没用a[N], 直接用下标了
int path[N]; //根->叶的一条路径
bool st[N]; //st[i]==true:a[i]用着呢, false:还没用
int n; // 真实个数

void dfs(int u){
    if(u == n) { //到了叶的下面
        for(int i=0; i<n; i++) printf("%d ", path[i]);
        puts(""); //相当于回车
        return;
    }

    for(int i=1; i<=n; i++){    //生孩子
        if(!st[i]){             // 该数字没用过
            st[i] = true;
            path[u] = i;        //把i填入到根u上
            dfs(u+1);           // 递归
            st[i] = false;      // 恢复现场，不恢复path，因为path之后会被覆盖
        }
    }
}

int main(){
    cin>>n;
    dfs(0);
    return 0;
}