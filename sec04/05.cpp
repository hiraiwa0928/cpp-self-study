#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {
    int i = 42;

    {
        int i = 72;

        cout << "inner: " << &i << ": " << i << endl;

        i = 0;
    }

    cout << "outer: " << &i << ": " << i << endl;

    return 0;
}
