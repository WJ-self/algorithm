#include<bits/stdc++.h>
using namespace std;

stack<int> st;
const int N = 1e5;
int a[N];

int main(){
    int M,x;
    cin >> M;
    for (int i=0; i<M; i++){
        cin >> x;
        while(!st.empty() && st.top() >= x) {
            st.
        }
        if(st.empty()) {
            a[i] = -1;
            st.push(x);
        }
        else {
            a[i] = st.top();
        }
    }
}