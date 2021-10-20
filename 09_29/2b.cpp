#include <iostream>
#include <cmath>
using namespace std;

int Bai2b(int k, int n, int m)
{
    int S = 1, h = 1;
    for (int i = 1; i <= n; ++i)
    {
        h = h * k % m;
        S = S % m + h;
    }
    S = S % m;
    return S;
}

int main()
{
    int n, m, k;
    cout << "Nhap k: ";
    cin >> k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
    cout << "S = " << Bai2b(k, n, m) << '\n';
    system("pause");
    return 0;
}
