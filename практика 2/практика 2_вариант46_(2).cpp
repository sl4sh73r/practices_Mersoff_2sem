#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter size:";
	cin >> N;
	int** mas = new int* [N];
	cout<< "Enter array:\n";
	for (int i = 0; i < N; i++)
		*(mas + i) = new int[N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin>>* (*(mas + i) + j);
	int Sum(0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) Sum += *(*(mas + i) + j);
		}
	}

	cout <<"Sum of the main diagonal = "<< Sum;

	return 0;
}