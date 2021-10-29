#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;

bool isHNum(ll n)
{
    vector<int> a{};
    bool result = false;
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    // Getting array of letter
    if (a.size() % 2 == 0)
    {
        int half = a.size() / 2;
        ll first, second;
        for (int i = 0; i < half; i++)
        {
            first += a[i];
        }
        for (int i = half; i < a.size(); i++)
        {
            second += a[i];
        }
        if (first == second)
            result = true;
    }
    return result;
}

int main()
{
    freopen("HNUM.INP", "r", stdin);
    freopen("HNUM.OUT", "w", stdout);
    ll n;
    cin >> n;
    for (int i = 11; i <= n; i++)
    {
        if (isHNum(i))
            cout << i;
    }
    // cout << hnums;
    return 0;
}
