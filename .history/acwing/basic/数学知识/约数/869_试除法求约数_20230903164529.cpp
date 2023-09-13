#include<bits/stdc++.h>
using namespace std;

int n,x;

void factor(int a) {
    vector<int> fa;
    for (int i=1; i <= a/i; i++) {
        if(a % i == 0){
            fa.push_back(i);
            if(i )fa.push_back(a/i);
        }
    }
    sort(fa.begin(), fa.end());
    for (int i=0; i<fa.size(); i++) {
        cout << fa[i] << " ";
    }
    cout << endl;

}

int main() {
    cin >> n;
    while(n--) {
        cin >> x;
        factor(x);
    }    
    return 0;
}