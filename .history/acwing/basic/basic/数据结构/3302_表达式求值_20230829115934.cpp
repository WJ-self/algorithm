#include<bits/stdc++.h>
using namespace std;

// 双栈，一个操作数栈，一个运算符栈；
stack<int> num;
stack<char> op;
string func;
int res;

int count() {
    char op_ = op.top();
    op.pop();
    int num1 = num.top();
    num.pop();
    int num2 = num.top();
    num.pop();
    switch(op_) {
        case '+': res = num1 + num2;
            break; 
        case '-': res = num1 - num2;
            break;
        case '*': res = num1 * num2;
            break;
        case '/': res = num1 / num2;
            break;
    } 
    return res; 
}

int main() {
    cin >> func;
    for(int i=0; i<func.length(); i++) {
        if(func[i] == ')') {
            count();
            num.push(res);   
            printf("res:%d\n",res);
        }
        else if(func[i] == ')')
            continue;
        else if(func[i] >= '0' && func[i] <= '9')
            num.push(func[i] - '0');
        else 
            op.push(func[i]);
    }
    if(num.size() > 1){

    }
    printf("%d", num.top());
}

