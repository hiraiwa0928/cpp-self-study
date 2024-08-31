#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    public:
        ~A();
};

A::~A() {
    cout << "デストラクターの呼び出し" << endl;
}

int main() {
    if (true) {
        cout << "if文" << endl;
        A a;
    }

    cout << endl;

    rep(5) {
        cout << "ただのスコープ" << endl;
        A a; 
    }

    cout << endl;

    cout << "main()関数の最後" << endl;
}
