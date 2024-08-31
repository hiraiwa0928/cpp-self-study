#include <iostream>
using namespace std;

int main() {
    int* ptr = 0; // これはnullptrを示している(0以外はエラー)
    cout << ptr << endl;

    ptr = nullptr;
    cout << ptr << endl;
}
