#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int arr[N];
int n,q,k;

int SL(int i, int j, int k){//arr[i,j]->find k's left index
	while(i < j){
		int mid  = (i+j) >> 1;
		if(arr[mid] >= k) j=mid;//not mid-1,  otherwise skip the left
		else l = mid+1;
	}
	return l;//l==r
}

int SR(int i, int j, int k){//arr[i,j]->find k's left index
	while(i < j){
		int mid = i+j+1 >> 1; //+1:avoid out of range
		if(arr[mid] <= k) l=mid; //not mid+1, otherwise skip the right
		else r = mid-1; //why?
	}
	return l;
}	

int main(){
	cin >> n >> q;
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	for (int i=0; i<q; i++) {
		cin >> k;
		int l = SL(0, n-1, k);
		if (arr[l] == k){
			cout << l <<" "<<SR(0, n-1, k)<<endl;
		}
		else
			cout << -1 << " "<< -1 <<endl;
	}
}
