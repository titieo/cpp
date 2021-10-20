#include <iostream>
#include <cstdio>

using namespace std;

void convertSecond(int t, int &min, int &sec)
{
    min = t / 60;
    sec = t % 60;
}

int main()
{
    freopen("MOBILE.INP", "r", stdin);
    freopen("MOBILE.OUT", "w", stdout);
    int p, t, n;
    int min, sec;
    cin >> p >> t >> n;
    convertSecond(n, min, sec);
    int block = sec / 6 + (sec % 6 > 0 ? 1 : 0);
    int bill = p * min + t * block;
    cout << bill;
    return 0;
}
