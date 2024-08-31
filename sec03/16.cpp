#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    public:
        void foo();
};

void A::foo(){
    cout << "A::foo()" << endl;
}

void call_foo(A *pa) {
    pa -> foo();
}

int main() {
    A a;
    call_foo(&a);
    return 0;
}
