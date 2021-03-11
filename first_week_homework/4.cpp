#include <iostream>

using namespace std;

int power(int x, unsigned p) {
	int result = 1;
	while (p) {
		result *= x;
		p -= 1;
	}
	return result;
}

int main()
{
	int x;
	unsigned p;
	cin >> x;
	cin >> p;
	cout << power(x, p);
}

