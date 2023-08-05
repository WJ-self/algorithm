#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+10;
int a[N],b[N];

int main(){
	cin >> n >> m;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    int i, j;
    for (i=0, j=0; i<n; i++) {
        while(a[i] != b[j]) {
            j++;
            if(j>=m){
                std::cout<<"No"<<endl;
                return 0;
            }
        }
    }
    std::cout << "Yes" <<endl;
    return 0;

}
