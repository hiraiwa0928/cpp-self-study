#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

union U {

    float f;

    private:
        int i;

    public:
        U();
        int get_i() const;
};

U::U() : i(0xdeadbeef) {
    cout << "&f: " << &f << endl
        << "&i: " << &i << endl;
}

int U::get_i() const {
    return this->i;
}

int main() {
    U u;
    cout << hex << u.get_i() << endl;
    u.f = 2.71828f;
    cout << hex << u.get_i() << endl;

    return 0;
}
