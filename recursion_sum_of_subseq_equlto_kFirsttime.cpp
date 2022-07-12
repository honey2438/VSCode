#include <iostream>
#include <vector>
using namespace std;
bool subseq(int ind, int arr[], vector<int> &ds, int n, int sum, int s)
{
    if (ind == n)
    {
        if (sum == s)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            return true;
        }
        return false;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    if (subseq(ind + 1, arr, ds, n, sum, s) == true)
    {
        return true;
    }

    ds.pop_back();
    s -= arr[ind];
    if (subseq(ind + 1, arr, ds, n, sum, s) == true)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    vector<int> ds;
    int n = 3;
    subseq(0, arr, ds, n, 3, 0);
    return 0;
}