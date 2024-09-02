#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int* local() {
    int i = 42;
    return &i;
}

int* dyn_alloc() {
    int* ptr = new int;
    *ptr = 42;
    return ptr;
}

int main() {
    int* d = dyn_alloc();
    cout << *d << endl;
    delete d;

    return 0;
}
