#include<bits/stdc++.h>
using namespace std;

int n;
typedef long long LL;
LL a,p;

void quick_pow(LL a, LL p, LL m){

}

int main() {
    cin >> n;
    while(n--) {
        cin >> a >> p;
        if(a % p) {
            cout << "impossible" <<endl;
        }
        cout << quick_pow(a,p-2,p);
    }
    return 0;
}