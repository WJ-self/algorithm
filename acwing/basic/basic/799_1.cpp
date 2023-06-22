#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	for (int i=0; i<s.size(); i++) {
		int j=i;
		while(j<s.size() && s[j] != ' ') j++;
		for (int k=i; k<j; k++) cout << s[k];
		cout << endl;
		i=j;
	}
	return 0;
}
