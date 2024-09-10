#include <iostream>
#include <utility>
using namespace std;

class home {
    int* m_land;

    public:
        explicit home(size_t size)
            : m_land(new int[size]) {};
        
        ~home() {delete [] m_land;};

        home(home&& other);

        int* land() const {return m_land;};
};

home::home(home&& other) : m_land{other.m_land} {
    other.m_land = nullptr;
}

int main() {
    home A{100};

    cout << "Aの土地のアドレス: " << A.land() << endl;

    home B{move(A)};

    cout << "Bの土地のアドレス: " << B.land() << endl;
    cout << "移動後のAの土地のアドレス: " << A.land() << endl;

    return 0;
}
