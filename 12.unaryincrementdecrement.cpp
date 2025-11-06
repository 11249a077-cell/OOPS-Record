#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Overload prefix increment (++x)
    void operator++() {
        ++value;
    }

    // Overload prefix decrement (--x)
    void operator--() {
        --value;
    }

    // Display function
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(10);

    cout << "Initial value:" << endl;
    n.display();

    ++n;  // calls operator++()
    cout << "\nAfter increment:" << endl;
    n.display();

    --n;  // calls operator--()
    cout << "\nAfter decrement:" << endl;
    n.display();

    return 0;
}
