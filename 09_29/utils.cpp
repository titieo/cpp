#include <iostream>

using namespace std;

int factorial(int n)
{
    int result = 1;
    if (n <= 0)
        cout << "Invalid";
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
    }
    return result;
}
