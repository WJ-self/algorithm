#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a = {4,7,5,6,1};
    sort(a.begin(), a.end());
    cout << lower_bound(a.begin(), a.end(),5);
}