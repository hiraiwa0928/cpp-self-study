#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class S {
    static int count;

    public:
        S();
        ~S();

        void show_count() const;
};

int S::count = 0;

S::S() {
    ++count;
}

S::~S() {
    --count;
}

void S::show_count() const {
    cout << "S::count: " << count << endl;
}

void fun() {
    S a;
    a.show_count();
}

int main() {
    S a;
    a.show_count();
    fun();
    a.show_count(); // fun()関数ないのaは破棄されているので1

    return 0;
}
