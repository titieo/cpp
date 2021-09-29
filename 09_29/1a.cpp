#include <iostream>
#include <cmath>

using namespace std;
/*
Bài 1a:
    input: n thuộc N, n > 0
    output: S số thực
    có 1 input
*/

double Bai1a(int n, double &S)
{
    S = 0;
    for (int i = 1; i <= n; ++i)
    {
        S += sqrt(i);
    }
    return S;
}

int main()
{
    int n;
    double S;
    cout << "Nhap n: ";
    cin >> n;
    Bai1a(n, S);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
