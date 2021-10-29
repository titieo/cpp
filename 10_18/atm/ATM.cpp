
#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

int countWays(ll a, ll b, ll c, ll n)
{
    ll first = n / 5;
    ll second = n / 10;
    ll third = n / 20;
    if (first > a)
        first = a;
    if (second > b)
        second = b;
    if (third > c)
        third = c;
    return first * second * third;
}

int main()
{
    freopen("ATM.INP", "r", stdin);
    freopen("ATM.OUT", "w", stdout);
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll ways = countWays(a, b, c, n);
    cout << ways;
    return 0;
}
