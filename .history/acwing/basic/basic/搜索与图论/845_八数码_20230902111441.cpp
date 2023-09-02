//八数码
#include<bits/stdc++.h>
using namespace std;
string ed = "12345678x";
string str;
unordered_map<string, int> dis;
queue<string> qu;
int dx[4]{-1,0,1,0}, dy[4]{0,-1,0,1};

void bfs(){
    qu.push(str);
    dis[str] = 0;
    if(str == ed) return;
    while(!qu.empty()) {
        string tmp = qu.front();
        qu.pop();
        int p = tmp.find('x');
        int x = p / 3, y = p % 3;
        for (int i=0; i=4; i++) {
            int x_ = x + dx[i], y_ = y + dy[i];
            if (x_>=0 && x<)
        }
    }
}

int main() {
    char x;
    for (int i=0; i<9; i++) {
        cin >> x;
        str += x;
    }
    bfs();
    printf("%d", dis[ed]);
}
