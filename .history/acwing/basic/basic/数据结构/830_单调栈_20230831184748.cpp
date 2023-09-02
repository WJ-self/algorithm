#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int id[N], a[N], b[N];

int main(){
    int M;
    cin >> M;
    a[0] = -1, id[0] = -1;
    cin >> b[0];
    for (int i=1; i< M; i++) {
        cin >> b[i];
        if (b[i] > b[i-1]) {
            id[i] = i-1;
            a[i] = b[i-1];
        } else {
            int a_ = -1;
            int id_ = -1;
            int j = i-1;
            while(id[i-1] != -1) {
                if()
            }
        }
    }
}