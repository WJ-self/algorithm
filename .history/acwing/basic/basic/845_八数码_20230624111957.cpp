#include<bits/stdc++.h>
using namespace std;
char ch;
string st;
unordered_map<string, int> dis;


int main(){
    for(int i=0; i<9; i++){
        cin >> ch;
        st += ch;
    }
    cout << mp[st] << endl;

}