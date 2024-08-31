#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class S {
    public:
        static int num;
};

int S::num = 123;

int main() {
    cout << S::num << endl;

    S::num = 456;

    S s;

    cout << s.num << endl;

    return 0;
}
