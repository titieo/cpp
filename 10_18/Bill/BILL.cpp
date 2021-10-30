#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

ll countBill(ll n)
{
    // count your electricity bill
    ll money;
    if (n <= 50)
    {
        money = n * 14;
    }
    else if (n <= 100)
    {
        money = 50 * 14 + (n - 50) * 15;
    }
    else if (n <= 200)
    {
        money = 50 * 14 + 50 * 15 + (n - 100) * 16;
    }
    else if (n <= 300)
    {
        money = 50 * 14 + 50 * 15 + 100 * 16 + (n - 200) * 17;
    }
    else if (n <= 400)
    {
        money = 50 * 14 + 50 * 15 + 100 * 16 + 100 * 17 + (n - 300) * 18;
    }
    else
    {
        money = 50 * 14 + 50 * 15 + 100 * 16 + 100 * 17 + 100 * 18 + (n - 400) * 20;
    }
    return money;
}

int main()
{
    freopen("BILL.INP", "r", stdin);
    freopen("BILL.OUT", "w", stdout);
    ll n;
    cin >> n;
    cout << countBill(n);
    return 0;
}
