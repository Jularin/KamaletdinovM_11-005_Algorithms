#include <iostream>

using namespace std;

int main()
{
    int x, result;
	result = 0;
    cin >> x;
	do
	{
		result += 1;
	} while (2 ^ result < x);
	cout << result - 1;
}

