#include <iostream>
using namespace std;

int sum(int* a, int size) {
	int summ = 0;
	for (int i = 0; i < size; i++) {
		summ += *(a + i);
	}
	return summ;
}


int main()
{
	int arr[5];
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arr_size; i++) {
			cin >> arr[i];
	}
	cout << sum(&arr[0], arr_size);
	return 1;
}
