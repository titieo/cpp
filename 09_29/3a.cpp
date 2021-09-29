#include <iostream>
#include <cmath>
using namespace std;

#include "utils.cpp"

double Bai3a(double x, int n)
{
    double S = x;
    for (int i = 2; i <= n; ++i)
    {
        S += pow(-1, (i + 1)) * (pow(x, i) / factorial(i));
    }
    return S;
}

int main()
{
    int n;
    double x;

    cout << "Bai 3a\n"
         << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    double S = Bai3a(n, x);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
