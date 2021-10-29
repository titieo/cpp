#include <iostream>
#include <cstdio>

using namespace std;
typedef long long ll;

void convertSecond(ll t, ll &min, ll &sec)
{
    min = t / 60;
    sec = t % 60;
}

int main()
{
    freopen("MOBILE.INP", "r", stdin);
    freopen("MOBILE.OUT", "w", stdout);
    ll p, t, n;
    ll min, sec;
    cin >> p >> t >> n;
    convertSecond(n, min, sec);
    ll block = sec / 6 + (sec % 6 > 0 ? 1 : 0);
    ll bill = p * min + t * block;
    cout << bill;
    return 0;
}
