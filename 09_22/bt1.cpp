#include <iostream>
#include <cmath>
using namespace std;

// Bài toán 1: Cho số nguyên dương n. Đếm số lượng ước dương của n.
// METHOD 1: Bad way
/*
int main()
{
	int n, cnt = 0;
	cin>>n;
	for (int a = 1; a <= n; ++a)
		if (n % a == 0)
			cnt = cnt + 1; //++cnt
	cout<<cnt;
	return 0;
}
*/

// METHOD 2: Best practice
int main()
{
    int n, cnt = 0;
    cout << "Enter a number: ";
    cin >> n;
    int m = sqrt(n);
    for (int a = 1; a <= m; ++a)
        if (n % a == 0 && a != n / a)
        {
            cout << a << " " << n / a << " ";
            cnt = cnt + 2;
        }
        else if (a * a == n)
        {
            cout << a << " ";
            ++cnt;
        }

    cout << "So uoc duong: " << cnt << "\n";
    system("pause");
    return 0;
}

//
