#include<bits/stdc++.h>
using namespace std;

vector<int> mul(vector<int>& A, int b){
	vector<int> C;
	//A*b
	int t=0;//��λ 
	for(int i=0 ;i<A.size(); i++){
		t += A[i] * b;
		C.push_back(t%10);
		t /= 10; 
	}
	//�������µĽ�λt
	while(t){
		C.push_back(t%10);
		t /= 10;
	}
	//ȥ��ǰ����
	while(C.size()>1 && C.back()==0) C.pop_back();//>1:��ֹ1-1=0 
	//return 
	reverse(C.begin(), C.end());
	return C;
}

int main(){
	string a;
	int b;
	cin >> a >> b;
	vector<int>A;
	for(int i=a.size()-1; i>=0; i--) A.push_back(a[i]-'0');
	vector<int>C = mul(A,b);
	for(int i=0; i<C.size(); i++){
		cout << C[i];
	}
} 
