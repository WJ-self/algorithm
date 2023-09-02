#include<bits/stdc++.h>
using namespace std;

// 双栈，一个操作数栈，一个运算符栈；
stack<int> num;
stack<char> op;
string func;

int main() {
    cin >> func;
    for(int i=0; i<func.length(); i++) {
        if(func[i] == ')') {
            char op_ = op.top();
            op.pop();
            int num1 = num.top();
            num.pop();
            int num2 = num.top();
            num.pop();
            
        }
    }
}

