#include <bits/stdc++.h>
using namespace std;

int x;
int& get_x(){
    return x;
}

int main() {
    x = 10;
    int& y = get_x();
    cout << y << endl;
    y = 100;
    cout << x << endl;
    
    return 0;
}
