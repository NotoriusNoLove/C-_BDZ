#include <iostream>

using namespace std;

template <typename T>
void fibonacci(T N)
{
    T F1 = 1, F2 = 1, FK;
    cout << F1 << " " << F2 << " ";

    for (T i = 3; i <= N; i++)
    {
        FK = F1 + F2;
        cout << FK << " ";
        F1 = F2;
        F2 = FK;
    }
}

int main()
{
    int N;
    cin >> N;

    fibonacci(N);

    return 0;
}