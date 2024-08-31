#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

namespace A{
    struct S {
        int a ;
    };

    void foo() {
        cout << "A::foo()" << endl;
    }
}

namespace B {
    struct S {
        int b;
    };

    void foo() {
        cout << "B::foo()" << endl;
    }
}

int main() {
    A::foo();

    B::foo();

    A::S as;

    B::S bs;

    // as = bs;
}
