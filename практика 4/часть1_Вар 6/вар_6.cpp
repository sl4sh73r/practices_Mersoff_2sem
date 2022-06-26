#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	ifstream input("primarytext.txt");
	ofstream output("primarytext.txt");


	string s; cin >> s; output << s;


	int n;
	ofstream output_answ("changedtext.txt");
	for (int i = 0; i < s.length(); i++) {
		cout << "введите размер подстроки:"; cin >> n;
		string temp = "";
		if (i + n > s.length()) {
			for (int j = i; j < s.length(); j++) {
				temp += s[j];
			}
			output_answ << temp;
			break;
		}
		for (int j = i; j < i + n; j++) {
			temp += s[j];
		}
		temp += " ";
		output_answ << temp;
		i += n - 1;
	}

	return 0;
}



