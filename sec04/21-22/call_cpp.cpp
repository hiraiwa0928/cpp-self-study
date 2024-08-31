#include <iostream>

using namespace std;

extern "C" void call_c();
extern "C" void call_cpp() {
    cout << "call_cpp" << endl;
    call_c();
}
