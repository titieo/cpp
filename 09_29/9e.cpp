#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> a{};
vector<int> dist{};
// TODO: DO THIS HOMEWORK 😊😊😊
int Bai9d(int n)
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
        int d = sqrt(pow((a[i + 1] - a[i]), 2));
        // S += d;
        dist.push_back(d);
    }
    // Getting array of distance
    S = dist[0];
    for (int i = 0; i < dist.size(); ++i)
    {
        if (dist[i] > S)
            S = dist[i];
    }

    return S;
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Ket qua: " << Bai9d(n) << "\n";
    system("pause");
    return 0;
}
