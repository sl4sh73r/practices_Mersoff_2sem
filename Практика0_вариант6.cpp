﻿#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name1[17], name2[17], name3[17];
	char team_code1, team_code2, team_code3;
	float point1, point2, point3;
	unsigned short place1, place2, place3;

	cout << "Программа: Ведомость спортивних состязаний\n";

	cout << "\nПервая запись в таблице\n";
	cout << "Введите имя: ";
	cin.getline(name1, 17);
	while ((getchar()) != '\n');
	cout << "Введите код команды: ";
	cin>>(team_code1);
	while ((getchar()) != '\n');
	cout << "Введите количество баллов: ";
	while (!(cin >> point1)) {
		cout << "Не верные данные! Пожалуйста введите еще раз!\n";
		while ((getchar()) != '\n');
	}
	while ((getchar()) != '\n');
	cout << "Введите место в итоге: ";
	while (!(cin >> place1)) {
		cout << "Не верные данные! Пожалуйста введите еще раз!\n";
		while ((getchar()) != '\n');
	}
	while ((getchar()) != '\n');

	cout << "\nВторая запись в таблице\n";
	cout << "Введите имя: ";
	cin.getline(name2, 17);
	while ((getchar()) != '\n');
	cout << "Введите код команды: ";
	cin>>team_code2;
	while ((getchar()) != '\n');
	cout << "Введите количество баллов: ";
	while (!(cin >> point2)) {
		cout << "Не верные данные! Пожалуйста введите еще раз!\n";
		while ((getchar()) != '\n');
	}
	while ((getchar()) != '\n');
	cout << "Введите место в итоге: ";
	while (!(cin >> place2)) {
		cout << "Не верные данные! Пожалуйста введите еще раз!\n";
		while ((getchar()) != '\n');
	}
	while ((getchar()) != '\n');

	cout << "\nТретья запись в таблице\n";
	cout << "Введите имя: ";
	cin.getline(name3, 17);
	while ((getchar()) != '\n');
	cout << "Введите код команды: ";
	cin>>team_code3;
	while ((getchar()) != '\n');
	cout << "Введите количество баллов: ";
	while (!(cin >> point3)) {
		cout << "Не верные данные! Пожалуйста введите еще раз!\n";
		while ((getchar()) != '\n');
	}
	while ((getchar()) != '\n');
	cout << "Введите место в итоге: ";
	while (!(cin >> place3)) {
		cout << "Не верные данные! Пожалуйста введите еще раз!\n";
		while ((getchar()) != '\n');
	}
	while ((getchar()) != '\n');

	cout << "\n\n\n";

	
	cout.fill('-');
	cout<<'+'<< setw(69) << '+' << endl;
	cout.fill(' ');
	cout << "| Ведомость спортивних состязаний                                    |\n";
	cout.fill('-');
	cout << '+' << setw(69) << '+' << endl;
	cout.fill(' ');
	cout << "| Фамилия участника | Код команды | Количество балов | Место в итоге |\n";
	cout.fill('-');
	cout << '+' << setw(69) << '+' << endl;
	cout.fill(' ');
	cout << "| " << setw(17) << name1 << " | " << setw(11) << team_code1 << " | " << setw(16) << point1 << " | " << setw(13) << place1 << " |\n";
	cout << "| " << setw(17) << name2 << " | " << setw(11) << team_code2 << " | " << setw(16) << point2 << " | " << setw(13) << place2 << " |\n";
	cout << "| " << setw(17) << name3 << " | " << setw(11) << team_code3 << " | " << setw(16) << point3 << " | " << setw(13) << place3 << " |\n";
	cout.fill('-');
	cout << '+' << setw(69) << '+' << endl;
	cout.fill(' ');
	cout << "| Примечание: Д - \"Динамо\", С - \"Спартак\", Ш - \"Шахтер\"              |\n";
	cout.fill('-');
	cout << '+' << setw(69) << '+' << endl;
	
}
