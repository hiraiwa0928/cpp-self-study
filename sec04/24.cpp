#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

void hello() {
    cout << "hello, macro" << endl;
}

void goodbye() {
    cout << "goodbye, macro" << endl;
}

int main() {
    #define hello goodbye
    hello();

    #undef hello

    hello();
}
