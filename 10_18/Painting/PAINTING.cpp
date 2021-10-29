#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;

int countBlacks(ll n)
{
    ll black = 0;
    int m = sqrt(n);
    for (ll i = 1; i <= m; ++i)
    {
        if (n % i == 0)
            black += 2;
        if (i * i == n)
            black--;
    }
    return black;
}

int main()
{
    freopen("PAINTING.INP", "r", stdin);
    freopen("PAINTING.OUT", "w", stdout);
    ll n;
    cin >> n;
    ll blacks = countBlacks(n);
    cout << n - blacks << " " << blacks;
    return 0;
}
