#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> a{};
int Bai7(int n)
{
    long long k = 1, S = 0;
    for (int i = 1; i < n; i++)
    {
        for (int in = 0; in < a.size(); in++)
        {
            k += a[in];
        }
        k *= i;
        a.push_back(k);
        k = 0;
    }
    // Getting array of letter

    for (int in = 0; in < a.size(); in++)
    {
        S += a[in];
    }
    S *= n;
    return S;
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Ket qua: " << Bai7(n) << "\n";
    system("pause");
    return 0;
}
