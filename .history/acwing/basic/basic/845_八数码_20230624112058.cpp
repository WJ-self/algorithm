#include<bits/stdc++.h>
using namespace std;
char ch;
string st;
unordered_map<string, int> dis;

void bfs(){
    
}

int main(){
    for(int i=0; i<9; i++){
        cin >> ch;
        st += ch;
    }
    bfs();
    cout << dis[st] << endl;
    return 0;
}