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
        int d = dis[tmp];
        qu.pop();
        int p = tmp.find('x');
        int x = p / 3, y = p % 3;
        for (int i=0; i=4; i++) {
            int x_ = x + dx[i], y_ = y + dy[i];
            if (x_>=0 && x<3 && y>=0 && y<3) {
                int p_ = x_ * 3 + y_;
                swap(tmp[p], tmp[p_]);
                if(dis.find(tmp) == dis.end()) {
                    // 没有出现过
                    dis[tmp] = dis[]
                }
            }
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
