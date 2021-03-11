#include <iostream>
using namespace std;

void sort(int* a, int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[i]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


int main() {
	int arr[5];
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arr_size; i++) {
		cin >> arr[i];
	}
	sort(&arr[0], arr_size);
	for (int i = 0; i < arr_size; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}