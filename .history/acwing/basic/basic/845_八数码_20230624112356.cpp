#include<bits/stdc++.h>
using namespace std;
char ch;
string st;
unordered_map<string, int> dis;
int dx[4] = {-1,0,1,0}, dy[4]={0,-1,0,1};

void bfs(){
    queue<string> qu;
    qu.push(st);
    dis[st] = 0;

    while(qu.size()) {
        string t = qu.front();
        qu.pop();

        int x = 
    }
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