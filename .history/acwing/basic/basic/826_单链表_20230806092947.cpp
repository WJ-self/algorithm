#include<bits/stdc++.h>
using namespace std;
/**
 * 用数组模拟链表结构
 * 
*/
int head;//头节点索引
int idx;//可用节点索引
const int N = 1e5+10;
int e[N];//i索引节点的值
int ne[N];//下一个节点的索引(1,2,...):zai

void init(){
    head = -1;//-1:空结点
    idx = 0;
}

void add_to_head(int x){
    e[idx]=x, ne[idx]=head, head = idx, idx++;
}

void add(int k, int x){ // k:1...n
    e[idx] = x, ne[idx] = ne[k], ne[k] = idx, idx++;
}

void remove(int k){ // k:1...n
    
    ne[k] = ne[ne[k]];
    
}

int main(){
    int n;
    cin >> n;
    init();
    for (int i=0; i<n; i++){
        char inp;
        cin >> inp;
        int k,x;
        if(inp == 'H'){
            cin >> x;
            add_to_head(x);
        } else if(inp == 'D'){
            cin >> k;
            if(!k) head = ne[head];
            remove(k-1);
        } else if(inp == 'I'){
            cin >> k >> x;
            add(k-1, x);
        } else{}
    }
    for(int i=head; i!=-1; i=ne[i]){
        printf("%d ", e[i]);
    }
    return 0;
}