#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> a{};
int Bai9c(int n)
{
    int S = 0;
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    // Getting array of letter

    for (int i = 0; i < a.size() - 1; ++i)
    {
        int d = a[i + 1] - a[i];
        S += sqrt(pow(d, 2));
    }
    return S;
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Ket qua: " << Bai9c(n) << "\n";
    system("pause");
    return 0;
}
