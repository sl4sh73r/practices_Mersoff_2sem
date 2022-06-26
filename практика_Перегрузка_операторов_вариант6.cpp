#include <iostream>

using namespace std;

class Fractation {
private:
    long long int x;
    long long int y;
    char v;

public:

    Fractation(long long int x = 0, long long int y = 0, char v = 'v') {
        this->x = x;
        this->y = y;
        this->v = v;
    }
    void read() {
        cin >> x;
        char tmp;
        cin >> tmp;
        cin >> y;
    }
    void show() {
        cout << x << "/" << y << endl;
    }

    Fractation operator+ (Fractation& src) {
        long long int new_x = 1;
        long long int new_y = 1;

        if (this->y == src.y) {
            new_x = this->x + src.x;
            new_y = this->y;
        }
        else {
            new_x = this->x * src.y + src.x * this->y;
            new_y = this->y * src.y;
        }
        Fractation new_object(new_x, new_y);
        return new_object;
    }

    Fractation operator* (const Fractation& src) {
        long long int new_x = this->x * src.x;
        long long int new_y = this->y * src.y;

        Fractation new_object(new_x, new_y);
        return new_object;
    }

    Fractation operator<(const Fractation& src) {
        if (this->x * src.y == this->y * src.x) v = '=';
        else if (this->x * src.y < this->y * src.x) v = '<';
        else  if (this->x * src.y > this->y * src.x) v = '>';

        Fractation new_object(1, 1, v);
        return new_object;
    }

    Fractation operator/ (const Fractation& src) {
        long long int new_x;
        long long int new_y;
        if (src.y % src.x == 0) {
            new_x = this->x * (src.y / src.x);
            new_y = this->y * src.x;
        }
        else {
            new_x = this->x * src.y;
            new_y = this->y * src.x;
        }
        Fractation new_object(new_x, new_y);
        return new_object;
    }

    Fractation operator- (const Fractation& src) {
        long long int new_x = 1;
        long long int new_y = 1;
        if (src.y == this->y) {
            new_x = this->x - src.x;
            new_y = this->y;
        }
        else {
            new_y = this->y * src.y;
            new_x = this->x * src.y - src.x * this->y;
        }
        Fractation new_object(new_x, new_y);
        return new_object;
    }

    void V() {
        cout << v;
    }

    void V_equal() {
        if (v == '=') cout << "YES";
        else cout << "NO";
    }
};

int main() {
    Fractation a, b;
    a.read();
    b.read();
    char itr;
    cout << "enter the character of the overloaded operation-> " ;
    cin >> itr;
    if (itr == '+') {
        cout << "1) Sum: ";
        (a + b).show();
        cout << endl; }
    if (itr == '-') {
        cout << "2) Sub: ";
        (a - b).show();
        cout << endl; }
    if (itr == '*') {
        cout << "3) Mul: ";
        (a* b).show();
        cout << endl; }
    if (itr == '/') {
        cout << "4) Div: ";
        (a / b).show();
        cout << endl; }
    if (itr == '<>' ) {
        cout << "5) Com: ";
        (a < b).V();
        cout << endl; }

    return 0;
}