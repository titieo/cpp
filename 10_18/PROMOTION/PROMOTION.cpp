#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

ll countBottles(ll n, ll k)
{
    ll bottles = n / k;
    n = n % k + bottles;
    bottles += n / k;
    return bottles;
}

int main()
{
    freopen("PROMOTION.INP", "r", stdin);
    freopen("PROMOTION.OUT", "w", stdout);
    ll n, k;
    cin >> n >> k;
    cout << countBottles(n, k);
    return 0;
}
