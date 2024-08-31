#include <iostream>

using namespace std;

void call_c();
void call_cpp(){
    cout << "call_cpp" << endl;

    call_c();
}
