#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int arr[N];
int tmp[N];

void merge_sort(int l, int r, long long & res) {
	if(l >= r) return;
	int mid = (l+r)/2;
	merge_sort(l, mid, res);
	merge_sort(mid+1, r, res);
	int i=l, j=mid+1, k=l;
	while(i<= mid && j <= r) {
		if(arr[i] > arr[j]) {
			tmp[k++] = arr[j++];
			res += mid-i+1;
		} else tmp[k++] = arr[i++];
	}
	while(i<=mid) tmp[k++] = arr[i++];
	while(j<=r) tmp[k++] = arr[j++];
	for(int i=l; i<=r; i++){
		arr[i] = tmp[i];
	}
	}

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	long long res=0; // ×¢Òâresmax=5e9>INT_MAX=1e9 
	merge_sort(0, n-1, res);
	cout << res;
}
