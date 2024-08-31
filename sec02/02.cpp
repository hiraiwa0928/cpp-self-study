#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i = 0; i < n; i++)
#define range(a, b) for(int i = a; i < b; i++)

struct product {
    int id;
    int price;
    int stock;
};

void printProduct(product p) {
    cout << "商品ID: " << p.id << endl;
    cout << "単価: " << p.price << endl;
    cout << "在庫数: " << p.stock << endl;
}

int main() {

    product book = {
        1,
        200,
        300
    };

    printProduct(book);

    product *ptr = &book;

    ptr -> id = 2;
    printProduct(book);

    return 0;
}
