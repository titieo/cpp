#include <iostream>
#include <cmath>
using namespace std;

int Bai4(int n)
{
    int S = 0;
    int x = 1, i = 1;
    // METHOD 1
    // for (int i = 1; i > 0; ++i)
    // {
    //     S += sqrt(i);
    //     if (S >= n)
    //         break;
    //     x = i;
    // }
    while (S < n)
    {
        x = i;
        ++i;
        S += sqrt(i);
    }
    return x;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "x = " << Bai4(n) << "\n";
    system("pause");
    return 0;
}
