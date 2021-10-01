#include <iostream>

using namespace std;

int Bai9b(int n)
{
    // Reverse the input number
    int reverse = 0;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Chu so dao nguoc: " << Bai9b(n) << "\n";
    system("pause");
    return 0;
}
