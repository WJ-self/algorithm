#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int e[N];
int ne[N]; // next node index
int pr[N]; // prior node index
int head = -1, end = -1, idx = 0;

void L(int x) {
    e[idx] = x, ne[idx] = head, pr[head] = idx;
    if (head == end) {
        end = idx;
    }
    head = idx, idx++;
}

void R(int x) {
    e[idx] = x, pr[idx] = end, ne[end] = idx;
    if (head == end) {
        head = idx;
    }
    end = idx, idx++;
}

void D(int k) {
    k--;
    ne[pr[k]] = ne[k], pr[ne[k]] = pr[k];
}

void IL(int k, int x) {
    k--;
    e[idx] = x, ne[pr[k]] = idx, pr[idx] = pr[k], pr[k] = idx, ne[idx] = k, idx++;
}

void IR(int k, int x) {
    k--;
    e[idx] = x, pr[ne[k]] = idx, ne[idx] = ne[k], ne[]
}

int main() {
    int n;
    cin >> n;
    string op;
    int k,x;
    while (n--) {
        cin >> op;
        if (op == "L"){
            cin >> x;
            L(x);
        }
        else if (op == "R") {
            cin >> x;
            R(x);
        }
        else if (op == "D") {
            cin >> k;
            D(k);
        }
        else if(op == "IL") {
            cin >> k >> x;
            IL(k, x);
        }
        else if(op == 'IR') {
            cin >> k >> x;
            IR(k,x);
        }
    }
    
    int i=head; 
    while(ne[i] != -1) {
        cout << e[i] << " ";
        i = ne[i];
    }
}