#include <iostream>
// #include <cmath>

using namespace std;

double Bai1b(int n)
{
    double S = 0;
    for (int i = 2; i <= n; ++i)
    {
        S += double(i - 1) / i;
    }
    return S;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    double S = Bai1b(n);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
