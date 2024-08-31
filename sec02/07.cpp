#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

class product {
    int id;
    int price;
    int stock;

    public:
        int get_id();
        void set_id(int new_id);

        int get_price();
        void set_price(int new_price);

        int get_stock();
        void set_stock(int new_stock);

        void set_all(int new_id, int new_price, int new_stock);
};

int product::get_id() {
    return id;
}

void product:: set_price(int new_price) {
    price = new_price;
}

int product::get_price() {
    return price;
}

void product::set_stock(int new_stock) {
    stock = new_stock;
}

int product::get_stock() {
    return stock;
}

void product::set_id(int new_id) {
    id = new_id;
}

void product:: set_all(int new_id, int new_price, int new_stock) {
    id = new_id;
    price = new_price;
    stock = new_stock;
}

int main()
{
    product pen;

    pen.set_id(0);
    pen.set_price(100);
    pen.set_stock(200);

    product *ptr = &pen;

    cout << "pen: \n" << endl;
    cout << "ID: " << ptr->get_id() << endl;
    cout << "Price: " << ptr->get_price() << endl;
    cout << "Stock: " << ptr->get_stock() << endl << endl;

    product eraser;

    eraser.set_all(1, 50, 100);

    product *ptr2 = &eraser;

    cout << "eraser: \n" << endl;
    cout << "ID: " << ptr2->get_id() << endl;
    cout << "Price: " << ptr2->get_price() << endl;
    cout << "Stock: " << ptr2->get_stock() << endl;

    return 0;
}
