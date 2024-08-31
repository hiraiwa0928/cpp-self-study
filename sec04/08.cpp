#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int* dangling_pointer() {
    int i = 0;
    return &i;
}

// int main() {
//     int* p = dangling_pointer()
//     *p = 42;
// }
