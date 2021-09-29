#include <iostream>
#include <cmath>

using namespace std;

double Bai1a(int n)
{
    double S = 0;
    for (int i = 1; i <= n; ++i)
    {
        S += sqrt(i);
    }
    return S;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    double S = Bai1a(n);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
