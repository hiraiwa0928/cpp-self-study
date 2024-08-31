#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i = 0; i < n; i++)
#define range(a, b) for(int i = a; i < b; i++)

struct S {
    int a;
    int b;
    int c;
};

int main () {

    S s;

    cout << "s.aのアドレス: " << &s.a << endl;
    cout << "s.bのアドレス: " << &s.b << endl;
    cout << "s.cのアドレス: " << &s.c << endl;

    return 0;
}
