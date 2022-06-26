#include <iostream>

using namespace std;

class A {
  public:
    int x1; 
    int x2;
    A() {x1 = 0; x2 = 0;}
    void virtual set_x1(int tmp) {
        this -> x1 = tmp;
    }
    void virtual set_x2(int tmp) {
        this -> x2 = tmp;
    }
    int virtual get_x1(){
        //cout << " A.x1: ";
        return x1;
    }
    int virtual get_x2(){
        //cout << " A.x2: ";
        return x2;
    }
    ~A() {
       //delete x1;
       //delete x2;
    }
};

class B: public A {
  public:
  int y;
  B() {y = 0;}
  void virtual set_y(int tmp) {
      this -> y = tmp;
  }
  int virtual get_y(){
      //cout << " B.y: ";
      return y;
  }
  virtual void Run(A* a, B* b) {
      cout << "(x1 + x2) * y: " << (a -> get_x1() + a -> get_x2()) * b -> get_y() << endl;
  }
  ~B() {
      //delete y;
  }  
};

int main() {
    int x1, x2, y;
    cout << "x1, x2, y: " << endl;
    cin >> x1 >> x2 >> y;
    A X12;
    B Y;
    X12.set_x1(x1); X12.set_x2(x2);
    Y.set_y(y);
    Y.Run(&X12,&Y);
    return 0;
}
