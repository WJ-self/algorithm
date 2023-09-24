#include<bits/stdc++.h>
using namespace std;

const int N = 5e4+10;

struct Cow{
    int w,s;
    bool operator < (const Cow& c) const{
        return (w+s) < (c.w)
    }
}


int main() {

}