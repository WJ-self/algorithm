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

        int pos = t.find('x');
        int x = pos / 3, y = pos % 3;
        for(int i=0; i<4; i++) {
            int x_ = x + dx[i], y_ = y + dy[i];
            int pos_ = x_ *3 + y_;
            swap(t[pos], t[pos_]);
        }
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