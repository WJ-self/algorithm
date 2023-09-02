#include<bits/stdc++.h>
using namespace std;

stack<int> num;
stack<char> op;

void eval() {
    
}

int main() {
    unordered_map<char, int> pr{{'+',1}, {'-',1}, {'*',2}, {'/',2}};
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++) {
        char c = str[i];
        int x = c-'0', j=i+1;
        if(isdigit(c)) {
            while(isdigit(str[j])) 
                x = x*10 + str[j++] - '0';
            i = j-1;
        }
        else if()
    }

}