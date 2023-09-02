#include<bits/stdc++.h>
using namespace std;

vector<int> div(vector<int>& A, int b, int&r){
	vector<int> C;
	//除法
	r=0;
	for(int i=0; i<A.size(); i++){
		r = r*10 + A[i];

		C.push_back(r/b);
		r = r%b;
	} 
	//由于在除法运算中，高位到低位运算，因此C的前导零都在vector的前面而不是尾部，vector只有删除最后一个数字pop_back是常数复杂度，而对于删除第一位没有相应的库函数可以使用，而且删除第一位，其余位也要前移，
    //因此我们将C翻/转，这样0就位于数组尾部，可以使用pop函数删除前导0
    reverse(C.begin(), C.end()); 
	//前导零
	while(C.size() > 1 && C.back()==0) C.pop_back();
    reverse(C.begin(), C.end()); 
	//return 
	return C;
}

int main(){
	string a;
	int r=0;//余数 
	int b;
	vector<int> A;
	cin >> a >> b;
	for(int i=0; i<a.size(); i++) A.push_back(a[i]-'0'); //高位在前 
	vector<int> C = div(A, b, r);
	for(int i=0; i<C.size(); i++){
		cout << C[i];
	} 
	cout<<endl;
	cout<<r;
}
