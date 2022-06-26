#include <iostream>


using namespace std;

class qt6 {
public:
    qt6() {
        cout << "{class qt6} - [start program]\n";
    }
    void(qt6::* f[6])(void) = { &qt6::set,&qt6::get,&qt6::print_text,&qt6::static_float,&qt6::print,&qt6::end };
    void get(void) {
        cout << "char c1 = " << c1 << endl;
        cout << "char c2 = " << c2 << endl;
        cout << "char c3 = " << c3 << endl;
    }

    void set(void) {
        cout << "enter c1 (char): ";
        cin >> c1;
        cout << "enter c2 (char): ";
        cin >> c2;
        cout << "enter c3 (char): ";
        cin >> c3;
    }
protected:
    char c1 = '\0';
    char c2 = '\0';
    char c3 = '\0';

    void print_text(void) {
        cout << "qt6() \n";
    }

    void static_float(void) {
        float x4, x5, x6;
        cout << "enter c4 (float): ";
        cin >> x4;
        cout << "enter c5 (float): ";
        cin >> x5;
        cout << "enter c6 (float): ";
        cin >> x6;

        qt6::c4 = x4;
        qt6::c5 = x5;
        qt6::c6 = x6;
    }

    void end(void) {
        cout << "End\n";
    }

private:
    static float c4;
    static float c5;
    static float c6;

    void print(void) {
        cout << "c4 = " << c4 << endl;
        cout << "c5 = " << c5 << endl;
        cout << "c6 = " << c6 << endl;
    }
};
float qt6::c4 = 0;
float qt6::c5 = 0;
float qt6::c6 = 0;

int main() {
   

    qt6 object;

    for (int i = 0; i < 6; i++) {
        (object.*object.f[i])();
    }

    for (int i = 0; i < 6; i++) {
        cout << "Address: " << &object.f[i] << endl;
    }

    return 0;
}