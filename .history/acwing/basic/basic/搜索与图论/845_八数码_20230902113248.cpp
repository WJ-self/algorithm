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
    while(!qu.empty()) {
        string tmp = qu.front();
        cout << tmp << endl;
        int d = dis[tmp];
        qu.pop();
        int p = tmp.find('x');
        int x = p / 3, y = p % 3;
        for (int i=0; i<4; i++) {
            int x_ = x + dx[i], y_ = y + dy[i];
            if (x_>=0 && x_<3 && y_>=0 && y_<3) {
                int p_ = x_ * 3 + y_;
                swap(tmp[p], tmp[p_]);
                if(dis.find(tmp) == dis.end()) {
                    // 没有出现过
                    dis[tmp] = d+1;
                    if(tmp == ed) return;
                    qu.push(tmp);
                }
                //还原现场，方便后面交换
                swap(tmp[p], tmp[p_]);
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
    if (dis.find(ed) == dis.end())
        printf("-1\n");
    else {
        printf("%d\n",dis[ed]);
    }
}
