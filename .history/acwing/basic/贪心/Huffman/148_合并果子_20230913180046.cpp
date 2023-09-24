#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> heap;
int n,a,b,sum;

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        heap.push(a);
    }
    while(heap.size() > 1){
        a = heap.top(), heap.pop();
        b = heap.top(), heap.pop();
        heap.push(a+b);
        sum += a+b;
    }
    cout << heap.top()+sum;
    return 0;
}