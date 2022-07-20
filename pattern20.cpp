#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 + 1; j++)
        {
            if (j == i + 1 || j == 2 * n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}