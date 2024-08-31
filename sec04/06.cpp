#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    public:
        A();
        ~A();
};

A::A() {
    cout << "コンストラクター" << endl;
}

A::~A() {
    cout << "デストラクター" << endl;
}

A a;

int main() {
    cout << "main()関数" << endl;

    return 0;
}
