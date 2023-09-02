#include<bits/stdc++.h>
using namespace std;

int quickSort(int*arr, int i, int j, int k){
	if(i>=j) return arr[k];
	int l=i-1, r=j+1;
	int pivot = arr[(i+j)/2];
	while(l<r){
		do l++; while(arr[l]<pivot);
		do r--; while(arr[r]>pivot);
		if(l<r) swap(arr[l], arr[r]);
	}
	if(k<=r) return quickSort(arr, i, r, k);
	else return quickSort(arr, r+1, j, k);
}

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int res = quickSort(arr, 0, n-1, k-1);
	printf("%d",res);
} 
