#include <iostream>
#include <cmath>
using namespace std;

int factorial(int i)
{
    if (i == 0)
        return 1;
    else
        return i * factorial(i - 1);
}

int main()
{
    int n = 4, res;
    float X = 44;
    // cin >> n >> X;
    int steps = 1;

    for (int i = 1; i <= n; i++)
    {
        if (steps == 1)
        {
            res += pow(X, i) / factorial(2 * i + 1);
            steps = 0;
        }
        else
        {
            res -= pow(X, i) / factorial(2 * i + 1);
            steps = 1;
        }

        cout << "Полученное число является приближенным значением функции sin в точке " << (res);
        return 0;
    }
}
