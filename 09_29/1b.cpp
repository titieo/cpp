#include <iostream>
#include <cmath>

using namespace std;

double Bai1b(int n, double &S)
{
    S = 0;
    for (int i = 2; i <= n; ++i)
    {
        S += double(i - 1) / i;
    }
    return S;
}

int main()
{
    int n;
    double S;
    cout << "Nhap n: ";
    cin >> n;
    Bai1b(n, S);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
