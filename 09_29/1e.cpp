#include <iostream>
#include <cmath>
using namespace std;

int Bai1e(int n)
{
    int S = 1, start = n % 2 ? 1 : 2;
    for (int i = start; i <= n; i += 2)
    {
        S *= i;
    }
    return S;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S = " << Bai1e(n) << '\n';
    system("pause");
    return 0;
}
