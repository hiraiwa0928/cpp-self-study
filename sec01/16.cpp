#include <iostream>
using namespace std;

int main() {
    float f = -1234.5678;
    cout << f << endl;

    int i = f;
    cout << i << endl;

    unsigned int u = i;
    cout << u << endl;

    unsigned short s = u;

    cout << s << endl;

    u = s;

    cout << u << endl;

    f = u;

    cout << f << endl;

    return 0;
}
