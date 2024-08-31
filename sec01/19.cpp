#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];

    cout << sizeof(arr) / sizeof(int) << endl;

    vector<int> arr2(5);

    cout << sizeof(arr2) / sizeof(int) << endl;
    cout << arr2.size() << endl;

    return 0;
}
