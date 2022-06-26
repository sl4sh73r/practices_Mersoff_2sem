#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

struct student {
	int math;
	int phys;
	int plotting;
	int sopromat;
	int chemistry;
	char surname[20];
	char name[20];
	char second_name[20];
};
int main() {
    setlocale(LC_ALL, "rus");
    ifstream input("data_stud.txt");
    ofstream output("data_stud.txt");

    cout << "Введите кол-во студентов: " << endl;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        student Stud;
        cout << "ФИО, Математика, физика, черчерние, химия, сопромат. " << i + 1 << " Студента:" << endl;

        cin >> Stud.surname >> Stud.name >> Stud.second_name;
        cin >> Stud.math >> Stud.phys >> Stud.plotting >> Stud.chemistry >> Stud.sopromat;

        output << Stud.surname << " " << Stud.name << " " << Stud.second_name << " " << Stud.math << " " << Stud.phys << " " << Stud.plotting << " " << Stud.chemistry << " " << Stud.sopromat << endl;
    }
    output.close();

    int count(0);
    cout << endl << endl;
    for (int i = 0; i < n; i++) {
        student Stud;
        input >> Stud.surname;
        input >> Stud.name;
        input >> Stud.second_name;
        input >> Stud.math;
        input >> Stud.phys;
        input >> Stud.plotting;
        input >> Stud.chemistry;
        input >> Stud.sopromat;
        if (Stud.math <= 2) count++;
        if (Stud.phys <= 2) count++;
        if (Stud.plotting <= 2) count++;
        if (Stud.chemistry <= 2) count++;
        if (Stud.sopromat <= 2) count++;
    }
    cout << endl << count << " Всего неуд оценок по всем прелметам в группе.";
    return 0;
}

