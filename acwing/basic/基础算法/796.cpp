#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int arr[N][N];
int prefix[N][N];//prefix[i][j]:arr[0][0]->arr[i-1][j-1]µÄºÍ 
int n,m,q;

int main(){
	int x1,y1,x2,y2;
	cin >> n >> m >> q;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
			prefix[i+1][j+1] = prefix[i][j+1]+prefix[i+1][j]-prefix[i][j]+arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<prefix[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<q; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		x1--;//(x1,y1) is included in result 
		y1--;//(1,1)->(2,2)=prefix(2,2)-prefix(2,0)-prefix(0,2)-prefix(0,0)
		cout << prefix[x2][y2]-prefix[x2][y1]-prefix[x1][y2]+prefix[x1][y1]<<endl;
	}
}
