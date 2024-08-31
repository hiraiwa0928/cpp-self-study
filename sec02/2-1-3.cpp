#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

struct S {
    int x;
    int y;
};

union U {
    S s;
};

int main()
{

    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    cout << u.s.x << endl;
    cout << u.s.y << endl;

    cout << &u.s << endl;

    cout << &u.s.x << endl;
    cout << &u.s.y << endl;

    return 0;
}
