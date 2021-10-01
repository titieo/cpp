#include <iostream>

using namespace std;

int Bai9a(int n)
{
    // Count how many letter does a number has
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "So chu so: " << Bai9a(n) << "\n";
    system("pause");
    return 0;
}
