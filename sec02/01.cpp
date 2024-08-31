#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i = 0; i < n; i++)
#define range(a, b) for(int i = a; i < b; i++)

struct product {
    int id;
    int price;
    int stock;
};

int main() {
    product pen;

    pen.id = 0;
    pen.price = 100;
    pen.stock = 200;

    product *ptr = &pen;

    cout << "商品ID: " << ptr->id << endl;
    cout << "単価: " << ptr->price << endl;
    cout << "在庫数: " << ptr->stock << endl;

    return 0;
}
