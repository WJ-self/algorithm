#include<bits/stdc++.h>
using namespace std;

void quickSort(int*arr, int i, int j){
	if(i>=j) return;
	int p = (i+j)/2;
	int pivot = arr[p];
	int l = i-1, r = j+1;
	while(l < r){
		do l++; while(arr[l] < pivot); // 注意使用do while 
		do r--; while(arr[r] > pivot);
		if(l < r) swap(arr[l], arr[r]); //注意判断 
	}
	quickSort(arr, i, r);
	quickSort(arr, r+1, j); 
}

// 快排
int main() {
	int N;
	cin >> N;
	int nums[N];
	for(int i=0; i<N; i++) {
		cin >> nums[i];
	}
	quickSort(nums, 0, N-1);
	for(int i=0; i<N; i++) {
		cout << nums[i] << " ";
	}
}
