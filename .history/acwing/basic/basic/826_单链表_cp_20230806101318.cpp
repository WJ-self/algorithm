#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int e[N]; // node value at k-1
int ne[N]; // next node index
int head=-1, idx=0; // head node, usable node index (the k-th inserted)

void add_to_head(int x) {
    e[idx] = x, ne[idx] = head, head = idx, idx++;
}

void insert(int k, int x) {
    k--;
    e[idx] = x, ne[idx] = ne[k], ne[k] = idx, idx++;
}

void del(int k) {
    k--;
    ne[k] = ne[ne[k]];
}

int main() {
    int n;
    cin >> n;
    char op;
    int k, x;
    while(n--) {
        cin >> op;
        if (op == 'H') {
            cin >> x;
            add_to_head(x);
        } else if(op == 'I') {
            cin >> k >> x;
            insert(k, x);
        } else if(op == 'D') {
            cin >> k;
            del(k);
        }
    }
}