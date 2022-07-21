#include <iostream>
using namespace std;
void decimalToHexadecimalConversion(int n)
{
    char arr[100];
    int i = 0;
    while (n > 0)
    {
        if (n % 16 < 10)
        {
            arr[i] = (n % 16) + 48;
        }
        else
        {
            arr[i] = (n % 16) + 55;
        }
        i++;
        n /= 16;
    }

    for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter the no";
    cin >> n;
    decimalToHexadecimalConversion(n);
    return 0;
}