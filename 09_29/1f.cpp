#include <iostream>
#include <cmath>
using namespace std;

// Don't know how to do this one

double Bai1f(int n)
{
    double s = n - 1 + double(1) / n;
    for (int i = n - 1; i > 0; --i)
    {
        s = i - 1 + double(1) / s;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << Bai1f(n);
    system("pause");
    return 0;
}
