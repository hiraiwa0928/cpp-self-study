#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {

    int array[5] = {0, 1, 2, 3, 4};

    int (*ptr)[5] = &array;

    for(int e : *ptr) {
        cout << e << endl;
    }

    cout << endl;

    int (&ref)[5] = array;

    for (int e : ref) {
        cout << e << endl;
    }

    return 0;
}
