#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int st[N];
int M, x, po = 0; // element begin at 1
string op;

int main() {
    cin >> M;
    while(M--) {
        cin >> op;
        if (op == "push") {
            cin >> x;
            st[++po] = x;
        }
        else if (op == "pop") {
            po--;
        }
        else if (op == "empty") {
            printf("%s\n", po?"YES":"NO");
        }
        else if (op == "query") {
            printf("%d\n", st[po]);
        }
        else {
            printf("error\n");
        }

    }
}