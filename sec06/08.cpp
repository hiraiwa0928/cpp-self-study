#include <bits/stdc++.h>

using namespace std;

class Array {
    int buffer[100];

    public:
        int& operator[](int index);
        size_t size() const {return 100;};
};

int& Array::operator[](int index) {
    return buffer[index];
}

int main() {
    Array array;

    for(size_t i = 0; i < array.size(); ++i) {
        array[i] = i;
    }

    cout << array[10] << endl;

    return 0;
}
