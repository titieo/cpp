#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

ll countSqur(ll n, ll m)
{
    // Count how many square are there in a rectangular contain nxm square
    ll result = m * n;
    ll small = m >= n ? n : m;
    for (int i = 1; i < small; ++i)
    {
        result += (n - i) * (m - i);
    }
    return result;
}

int main()
{
    freopen("CNTSQR.INP", "r", stdin);
    freopen("CNTSQR.OUT", "w", stdout);
    ll n, m;
    cin >> n >> m;
    cout << countSqur(n, m);
    return 0;
}
