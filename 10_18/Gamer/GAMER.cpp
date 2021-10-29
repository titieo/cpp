#include <iostream>
#include <cstdio>

using namespace std;
typedef long long ll;

int toLevels(ll n)
{
    int levels = 0;
    int i = 1;
    while (levels < n)
    {
        i++;
        levels += i;
    }
    return i;
}

int main()
{
    freopen("GAMER.INP", "r", stdin);
    freopen("GAMER.OUT", "w", stdout);
    ll n;
    cin >> n;
    cout << toLevels(n);
    return 0;
}
