#include<bits/stdc++.h>
using namespace std;

vector<int> div(vector<int>& A, int b, int&r){
	vector<int> C;
	//����
	r=0;
	for(int i=0; i<A.size(); i++){
		r = r*10 + A[i];

		C.push_back(r/b);
		r = r%b;
	} 
	//�����ڳ��������У���λ����λ���㣬���C��ǰ���㶼��vector��ǰ�������β����vectorֻ��ɾ�����һ������pop_back�ǳ������Ӷȣ�������ɾ����һλû����Ӧ�Ŀ⺯������ʹ�ã�����ɾ����һλ������λҲҪǰ�ƣ�
    //������ǽ�C��/ת������0��λ������β��������ʹ��pop����ɾ��ǰ��0
    reverse(C.begin(), C.end()); 
	//ǰ����
	while(C.size() > 1 && C.back()==0) C.pop_back();
    reverse(C.begin(), C.end()); 
	//return 
	return C;
}

int main(){
	string a;
	int r=0;//���� 
	int b;
	vector<int> A;
	cin >> a >> b;
	for(int i=0; i<a.size(); i++) A.push_back(a[i]-'0'); //��λ��ǰ 
	vector<int> C = div(A, b, r);
	for(int i=0; i<C.size(); i++){
		cout << C[i];
	} 
	cout<<endl;
	cout<<r;
}
