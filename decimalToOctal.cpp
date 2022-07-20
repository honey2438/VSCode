#include <iostream>
using namespace std;
void decimalToOctal(int n)
{
    int oct[100];
    int i = 0;
    while (n > 0)
    {
        oct[i] = n % 8;
        i++;
        n /= 8;
    }
    for (i = i-1; i >= 0; i--)
    {
        cout << oct[i];
    }
}
int main()
{
    int n;
    cout << "Enter the no";
    cin >> n;
    decimalToOctal(n);
    return 0;
}