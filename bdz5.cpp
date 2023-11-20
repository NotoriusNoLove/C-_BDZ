#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int F1 = 1, F2 = 1, FK;
    cout << F1 << " " << F2 << " ";

    for (int i = 3; i <= N; i++)
    {
        FK = F1 + F2;
        cout << FK << " ";
        F1 = F2;
        F2 = FK;
    }

    return 0;
}
`