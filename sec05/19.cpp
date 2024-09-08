#include <bits/stdc++.h>
using namespace std;

int id(int& i){
    return i;
}

int main() {
    int i = 42;

    auto j = id(i);

    j = 0;

    cout << i << endl;

    return 0;
}
