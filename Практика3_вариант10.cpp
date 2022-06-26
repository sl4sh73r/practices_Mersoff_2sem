#include <iostream>
#include <windows.h>

using namespace std;

struct Data {
	int val;
};

struct List {
	Data data;
	List* next;
};

List* _start = NULL;
List* _last = NULL;

int vvod();//ident(функция ввода данных)
void creatzagel(List** start, List** last, int value);//создаёт заголовок списка
void addel(List** start, List** last, int value);//добавляет эл-менты в конец списка
void printch(List** start, List** last);// Вводит и выводит значения
bool searchch(List** start, List** last, int value);//поиск эл-мента
void zamena(List** start, List** last, int old_value, int value); // замена эл=-мента
void trubochist(List** start, List** last); //delete list

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool isFirst = true;
	while (true) {
		cout << "Хотите ввести данные? 1-ДА 0-НЕТ : ";
		int answer = vvod();
		if (answer == 1) {
			if (isFirst) {
				isFirst = false;
				int data1 = vvod();
				creatzagel(&_start, &_last, data1);
			}
			else {
				int data2 = vvod();
				addel(&_start, &_last, data2);
			}
		}
		else if (answer == 0) {
			break;
		}
	}
	cout << "Вы ввели: \n";
	printch(&_start, &_last);
	cout << "Введите число, которое хотите заменить: \n";
	int data3 = vvod();
	cout << "Введите число, на которое заменится число: \n";
	int data4 = vvod();
	while (searchch(&_start, &_last, data3)) {
		zamena(&_start, &_last, data3, data4);
	}
	cout << "Данные которые остались в списке: \n";
	printch(&_start, &_last);
	trubochist(&_start, &_last);
}

int vvod() {
	int value;
	while (!(cin >> value)) {
		cout << "Не верные данные! Пожалуйста вводите только цифры! \n";
		cout << "Хотите ввести данные? 1-ДА 0-НЕТ : ";
		cin.clear();
		_flushall();
		while (getchar() != '\n');
	}
	cin.clear();
	_flushall();
	return value;
}

void creatzagel(List** start, List** last, int value) {
	*start = (List*)new List;
	(*start)->next = *start;
	(*start)->data.val = value;
	*last = *start;
}

void addel(List** start, List** last, int value) {
	List* q;
	q = (List*)new List;
	q->data.val = value;
	q->next = *start;
	(*last)->next = q;
	*last = q;
}

void printch(List** start, List** last) {
	List* p = *start;
	cout << "Список: " << endl;
	if (p == NULL) {
		return;
	}
	while (1) {
		cout << endl << p << " | " << p->data.val << " | " << p->next << endl;
		if (p == *last) {
			break;
		}
		p = p->next;
	}
}

bool searchch(List** start, List** last, int value) {
	List* p = *start;
	while (1) {
		if (p->data.val == value) {
			return true;
		}
		if (p == *last) {
			break;
		}
		p = p->next;
	}
	return false;
}

void zamena(List** start, List** last, int old_value, int value) {
	List* p = *start;
	while (1) {
		if (p->data.val == old_value) {
			p->data.val = value;
			return;
		}
		if (p == *last) {
			break;
		}
		p = p->next;
	}
}

void trubochist(List** start, List** last) {
	if (*start == 0)
		return;
	List* p = *start;
	List* t;
	while (1) {
		t = p;
		if (p == *last) {
			break;
		}
		p = p->next;
		delete t;
	}
	_start = NULL;
	_last = NULL;
}
