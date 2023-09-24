#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> heap;
int n,a,b;

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        heap.push(a);
    }
    while(heap.size() > 1){
        
    }
    cout << heap.top();
    return 0;
}