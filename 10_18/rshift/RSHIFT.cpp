#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;

vector<int> a{};
int RShiftNum(ll n)
{
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    // Getting array of letter
    ll b = a[0] * pow(10, (a.size() - 1));
    for (int i = 1; i < a.size(); i++)
    {
        b += a[i] * pow(10, (i - 1));
    }
    return b;
}

int main()
{
    freopen("RSHIFT.INP", "r", stdin);
    freopen("RSHIFT.OUT", "w", stdout);
    ll n;
    cin >> n;
    cout << RShiftNum(n);
    return 0;
}
