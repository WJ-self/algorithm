#include<bits/stdc++.h>
using namespace std;

//浮点数二分查找cpp模板 
double trible(double x){
	return x*x*x;
} 

int main(){
	double x;
	cin >> x;
	double l=-10000, r=10000;
	while(abs(r-l)>=1e-7){ //notice: 精度1e-6, 差1e-7
		double mid = (r+l)/2.0;
		if(trible(mid) >= x) r=mid;
		else l=mid;
	}
	printf("%.6f",l);
}
