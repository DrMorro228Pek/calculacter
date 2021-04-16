#include <iostream>
#include <string>
using namespace std;

class calc
{
private:
    int a = 0;
    int b = 1;
    string operation = "/";
public:
    void make_a(int int_1) {
        a = int_1;
    }
    void make_b(int int_2) {
        b = int_2;
    }
    void make_op(string str_1) {
        operation = str_1;
    }
    int plus() {
        return a + b;
    }
    int minus() {
        return a - b;
    }
    int div() {
        return a / b;
    }
    int mult() {
        return a * b;
    }
    void result() {
        if (operation == "+") {
            cout << plus();
        }
        if (operation == "-") {
            cout << minus();
        }
        if (operation == "*") {
            cout << mult();
        }
        if (operation == "/") {
            cout << div();
        }

    }
};

int main()
{
    calc pek;
    pek.make_a(1);
    pek.make_b(2);
    pek.make_op("+");
    pek.result();
    
}
