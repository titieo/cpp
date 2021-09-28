#include <iostream>
#include <cmath>
using namespace std;

// Bài toán 2: Cho phương trình nghiệm nguyên không âm 2x+y=n(*). Đếm số bộ nghiệm/liệt kê các nghiệm của phương trình.
int main()
{
    int n, cnt = 0;
    cout << "2x + y = a \n";
    cout << "Please enter a: ";
    cin >> n;

    /*******************************************/
    // METHOD 1
    /*
    for (int x = 0; x <= n / 2; x++)
        for (int y = 0; y <= n; y++)
            if (2 * x + y == n)
            {
                cnt++;
                cout << "(" << x << "," << y << ")";
            }
    return 0;
        */
    /*******************************************/
    // METHOD 2
    for (int x = 0; x <= n / 2; x++)
    {
        int y = n - 2 * x;
        cout << "(" << x << "," << y << ") ";
    }
    cout << '\n';
    cout << "Nghiem la: " << cnt << "\n";
    system("pause");
    return 0;
}
