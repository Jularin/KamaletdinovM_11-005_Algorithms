#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, D;
    cin >> a;
    cin >> b;
    cin >> c;
    D = b * b - 4 * a * c;
    if (D > 0) {
        cout << (-b + sqrt(D)) / 2 * a;
        cout << (-b - sqrt(D)) / 2 * a;
    }
    else
    {
        if (D == 0)
        {
            cout << (-b + sqrt(D)) / 2 * a;
        }
        else
        {
            cout << "Equalation doesn't have roots";
        }
    }


}

