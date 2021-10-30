#include <iostream>
#include <cstdio>
using namespace std;
typedef unsigned long long ll;

int countBottles(ll a, ll n, ll c)
{
    ll buy = c / a;
    ll free = buy / n;
    ll bottles = buy + free;
    return bottles;
}

int main()
{
    freopen("BUYMILK.INP", "r", stdin);
    freopen("BUYMILK.OUT", "w", stdout);
    ll a, n, C;
    cin >> a >> n >> C;
    ll bottles = countBottles(a, n, C);
    cout << bottles;
    return 0;
}
