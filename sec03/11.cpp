#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Book {
    string title = "";
    int page = 0;

    public:
        Book();
        explicit Book(string title, int page);

        void show() const;
};

Book::Book() : title("untitled"){}

Book::Book(string title, int page) : title(title), page(page) {}

void Book::show() const{
    cout << title << " " << page << "ページ" << endl;
}

int main() { 

    Book nsdmi;

    nsdmi.show();

    Book old_edition("独習C++ 第4版", 568);

    old_edition.show();
    
    return 0; 
}
