#include <iostream>
#include <cmath>

using namespace std;

double Bai1d(double x)
{
    double y = sqrt(2);
    for (int i = 2; i <= x; ++i)
    {
        y = sqrt(2 + y);
    }
    return y;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S = " << Bai1d(n) << '\n';
    system("pause");
    return 0;
}
