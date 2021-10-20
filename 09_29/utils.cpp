#include <iostream>

using namespace std;

long long factorial(int n)
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
