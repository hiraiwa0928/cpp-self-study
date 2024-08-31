#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;

    int *ptr = &i;
    *ptr = 42;

    cout << i << endl;
}
