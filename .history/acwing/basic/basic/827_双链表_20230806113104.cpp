#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int e[N];
int ne[N]; // next node index
int pr[N]; // prior node index
int head = -1, end = -1, idx = 0;

void L(int x) {

}

void R(int x) {

}

void D(int k) {

}

void IL(int k, int x) {

}

void IR(int k, int x) {

}

int main() {
    int n;
    cin >> n;
    string op;
    int k,x;
    while (n--) {
        cin >> op;
        if (op == "L"){
            cin >> x;
            L(x);
        }
        else if (op == "R") {
            cin >> x;
            R(x);
        }
        else if (op == "D") {
            cin >> k;
            D(k);
        }
        else if(op == "IL") {
            cin >> k >> x;
            IL(k, x);
        }
            case 'IL':
                break;
            case 'IR':
                cin >> k >> x;
                IR(k, x);
                break;
            default:
                break;
        }
    }
    int i=head; 
    while(ne[i] != -1) {
        cout << e[i] << " ";
        i = ne[i];
    }
}