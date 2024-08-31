#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i = 0; i < n; i++)
#define range(a, b) for(int i = a; i < b; i++)

union U {
    int a;
    int b;
    int c;
};

int main () {

    U u;

    cout << "u.aのアドレス: " << &u.a << endl;
    cout << "u.bのアドレス: " << &u.b << endl;
    cout << "u.cのアドレス: " << &u.c << endl;

    u.a = 1;

    cout << "u.a: " << u.a << endl;
    cout << "u.b: " << u.b << endl;
    cout << "u.c: " << u.c << endl;

    u.a = 3;

    cout << "u.a: " << u.a << endl;
    cout << "u.b: " << u.b << endl;
    cout << "u.c: " << u.c << endl;

    return 0;
}
