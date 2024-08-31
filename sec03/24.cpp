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

        static void show_count();
};

int S::count = 0;

S::S() {
    ++count;
}

S::~S() {
    --count;
}

void S::show_count() {
    cout << "S::count: " << count << endl;
}

int main() {
    S::show_count();

    S a;

    a.show_count();

    return 0;
}
