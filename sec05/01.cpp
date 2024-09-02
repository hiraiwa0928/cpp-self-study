#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {
    // vector<int> array(4);

    // rep(4) {
    //     array[i] = i;
    // }

    int array[] = {0, 1, 2, 3};

    cout << "先頭のアドレス" << &array[0] << endl;
    
    int *ptr = array;
    
    cout << "ポインター: " << ptr << endl;
    cout << "値: " << *ptr << endl;

    return 0;
}
