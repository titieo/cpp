#include <iostream>

using namespace std;

// #include "utils.cpp"

int Bai2a(int n, int m)
{
    int S = 0, h = 1;
    for (int i = 1; i <= n; ++i)
    {
        h = h * i % m;
        S = (S + h) % m;
    }
    return S;
}

int main()
{
    int n, m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
    cout << "S = " << Bai2a(n, m) << '\n';
    system("pause");
    return 0;
}
