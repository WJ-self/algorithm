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
            printf("a[%d] = %d\n", i, b[i-1]);
        } else {
            int a_ = -1;
            int id_ = -1;
            int j = i-1;
            while(id[j] != -1) {
                if(b[id[j]] < b[i]){
                    a_ = b[id[j]];
                    id_ = id[j];
                    j = id[j];
                }
                else {
                    j = id[j];
                }
            }
            a[i] = a_;
            printf("a[%d] = %d\n", i, a_);
            id[i] = id_;
        }

    }
    for (int i=0; i<M; i++) {
        printf("%d ", a[i]);
    }
}