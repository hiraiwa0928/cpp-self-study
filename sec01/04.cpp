#include <iostream>
using namespace std;

int main() {
    int a = 2;
    
    switch(a) {
        case 1: // hoge
        case 2: // hoge
        case 3: // hoge
            cout << "aは1か2か3です" << endl;
            return 0;
    }

    cout << "残りの処理" << endl;

    return 0;
}
