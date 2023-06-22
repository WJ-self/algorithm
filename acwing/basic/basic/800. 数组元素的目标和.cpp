#include<bits/stdc++.h>
using namespace std;
int n,m,x;
const int N = 1e5+10;
int a[N], b[N];

int main(){
	cin >> n >> m >> x;
	for (int i=0; i<n; i++) cin >>a[i];
	for (int j=0; j<m; j++) cin >>b[j];
	//i遍历
	for(int i=0; i<n; i++) {
		//j二分
		int key = x-a[i];
		int start = 0, end = m-1, mid=-1;
		while(start <= end) {
			mid = start + ((end-start) >> 1); //注意这里>>要打括号 
			if(b[mid] > key) end = mid-1;
			else if(b[mid] < key) start = mid+1;
			else{
				printf("%d %d",i,mid);
				return 0;
			}
		} 
	} 
	return 0;
}
