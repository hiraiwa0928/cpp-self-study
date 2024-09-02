#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {

    int array[] = {0, 1, 2, 3};

    int *ptr = array;

    ptr += 2;
    cout << *ptr << endl;

    ++ptr;
    cout << *ptr << endl;

    ptr -= 2;
    cout << *ptr << endl;

    --ptr;
    cout << *ptr << endl;

    return 0;
}
