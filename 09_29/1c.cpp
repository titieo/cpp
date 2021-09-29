#include <iostream>
#include <cmath>
using namespace std;

#include "utils.cpp"

double Bai1c(int n, double &S)
{
    S = 1;
    for (int i = 2; i <= n; ++i)
    {
        S += pow(-1, (i + 1)) * (double(1) / factorial(i));
    }
    return S;
}

int main()
{
    int n;
    double S;
    cout << "Bai 1c\n"
         << "Nhap n: ";
    cin >> n;
    Bai1c(n, S);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
