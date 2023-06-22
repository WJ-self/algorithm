#include<bits/stdc++.h>
using namespace std;
int n,m,l,r,res;
const int N=1e5+10;
int arr[N];//arr=[3,7,5,4,8]
int prefix[N];//prefix[i]:sum(arr[0,i)) 代表arr数组中前i个数的和。
//prefix=[0,3,10,15,19,27]


int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
		prefix[i+1] = arr[i]+prefix[i];
	}
	for(int i=0; i<m; i++) {
		cin >> l >> r;
		int j=l-1;
		int k=r;		
		res = prefix[k]-prefix[j];
		cout << res <<endl;
	}
}
