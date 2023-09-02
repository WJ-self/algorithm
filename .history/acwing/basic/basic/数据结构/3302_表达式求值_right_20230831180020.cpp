#include<bits/stdc++.h>
using namespace std;

stack<int> num;
stack<char> op;

void eval() {
    int b = num.top(); num.pop();
    int a = num.top(); num.pop();
    int c = op.top(); op.pop();
    int res;
    if(c == '+') res = a+b;
    else if (c == '-') res = a-b;
    else if (c == '*') res = a*b;
    else if (c == '/') res = a/b;
    num.push(res);
    printf("res:%d\n", res);
}

int main() {
    unordered_map<char, int> pr{{'+',1}, {'-',1}, {'*',2}, {'/',2}};
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++) {
        char c = str[i];
        if(isdigit(c)) {
            int x = c-'0', j=i+1;
            while(isdigit(str[j])) 
                x = x*10 + str[j++] - '0';
            i = j-1;
            num.push(x);
        }
        else if(c == '(') op.push(c);
        else if(c == ')') {
            while(op.top() != '(') eval();
            op.pop(); // pop (
        }
        else { //+-*/
            if(op.size() && pr[op.top()] >= str[i]) eval();
            op.push(str[i]);
        }
    }
    while(op.size()) eval();
    printf("%d", num.top());

}