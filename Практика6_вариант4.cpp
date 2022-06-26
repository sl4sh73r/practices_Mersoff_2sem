#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

class task4 {
private:
	double* x;
	double* y;
	double* z;
	double* a;
public:
	task4() {
		x = new double;
		y = new double;
		z = new double;
		a = new double;
	}
	~task4() {
		delete x;
		delete y;
		delete z;
		delete a;
	}
	void set(double& _x, double& _y, double& _z) {
		*x = _x;
		*y = _y;
		*z = _z;
	}
	void print() {
		cout << *x << " | " << *y << " | " << *z << " | " << *a << endl;
	}
	void run() {
		*a = ((log1p(pow(*y, -1.0 * sqrt(fabs(*x))))) * (*x - *y / 2.0)) + (pow(sin(atan(*z)), 2.0));
	}
};

float protection() {
	float value;
	while (!(cin >> value)) {
		cout << "Не верные данные! Пожалуйста вводите только цифры! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double* x = new double;
	double* y = new double;
	double* z = new double;

	cout << "Введите значение x: ";
	*x = protection();
	cout << "Введите значение y: ";
	*y = protection();
	cout << "Введите значение z: ";
	*z = protection();

	cout << "1)Прямой Вызов" << endl;
	task4 ex1;
	ex1.set(*x, *y, *z);
	ex1.run();
	ex1.print();

	cout << "2)Косвенный Вызов" << endl;
	task4 ex2;
	task4* cdincall2 = &ex2;
	cdincall2->set(*x, *y, *z);
	cdincall2->run();
	cdincall2->print();

	cout << "3)Прямой Динамический Вызов" << endl;
	task4* cdincall3 = new task4;
	(*cdincall3).set(*x, *y, *z);
	(*cdincall3).run();
	(*cdincall3).print();

	cout << "4)Косвенный Динамический Вызов" << endl;
	task4* cdincall4 = new task4;
	cdincall4->set(*x, *y, *z);
	cdincall4->run();
	cdincall4->print();

	delete cdincall2;
	delete cdincall3;
	delete cdincall4;
	delete x;
	delete y;
	delete z;
}
