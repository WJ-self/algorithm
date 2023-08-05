#include<bits/stdc++.h>
using namespace std;
char ch;
string st;
unordered_map<string, int> dis;
int dx[4] = {-1,0,1,0}, dy[4]={0,-1,0,1};
string ed = "12345678x";

void bfs(){
    queue<string> qu;
    qu.push(st);
    dis[st] = 0;

    while(qu.size()) {
        string t = qu.front();
        qu.pop();
        if(t == ed) {
            return;
        }
        int d = dis[t];
        int pos = t.find('x');
        int x = pos / 3, y = pos % 3;
        for(int i=0; i<4; i++) {
            int x_ = x + dx[i], y_ = y + dy[i];
            if(x_>=0 && x<3 && y >=0 && y<3) {
                int pos_ = x_ *3 + y_;
                swap(t[pos], t[pos_]);
                if(dis.find(t) == dis.end()) { //新的序列
                    dis[t] = d+1;
                    qu.push(t);
                }
                swap(t[pos_],t[pos]); //恢复现场
            }
        }
    }
}

int main(){
    for(int i=0; i<9; i++){
        cin >> ch;
        st += ch;
    }
    bfs();
    if(dis.find(ed) == dis.end()){
        cout << -1  << endl;
    } else {
        std::cout << dis[ed] << endl;
    }
    return 0;
}