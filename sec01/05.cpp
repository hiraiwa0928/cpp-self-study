#include <iostream>
using namespace std;

int main() {
    int a = 0;

    A:

    a++;
    cout << a << endl;

    if (a < 10) goto A;

    return 0;
}
