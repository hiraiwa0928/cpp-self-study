#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

string get_message();

int main() {
    auto msg = get_message();

    cout << msg << endl;

    return 0;
}

string get_message() {
    return "Hello, forward delaration";
}
