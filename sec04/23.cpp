#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

void hello() {
    cout << "hello, world" << endl;
}

void goodbye() {
    cout << "goodbye, world" << endl;
}

int main() {
    hello();

    cout << "hello, macro" << endl;

    #define hello goodbye

    hello();

    cout << "hello, macro" << endl;

    return 0;
}
