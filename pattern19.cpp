#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 11, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 < j < n; j++;)
        {
            if (j <= i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << a << " ";
                a++;
            }
        }
        for (int k = n - i; k > 0; k--)
        {
            cout << b;
            b++;
        }
        cout << endl;
    }

    return 0;
}