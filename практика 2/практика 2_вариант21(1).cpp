#include <iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter size:";
	cin>>N;
	int* A = new int[N];
	int* B = new int[N];
	cout<<"Enter array:\n";
	for (int i = 0; i < N; i++) {
		cin >>* (A + i);
	}
	int j = 0;
	for (int i = 0; i < N; i++) {
		if (*(A + i) > 0) {
			*(B + j) = *(A + i);
			j++;
		}
	}
	for (int i = 0; i < j; i++) {
		cout <<* (B + i) << " ";
	}
	return 0;
}