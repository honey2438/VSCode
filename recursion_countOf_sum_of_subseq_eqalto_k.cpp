#include <iostream>
#include <vector>
using namespace std;
int subseq(int ind, int arr[], vector<int> &ds, int n, int sum, int s)
{
    if (ind == n)
    {
        if (sum == s)
        {
            return 1;
        }
        return 0;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
   int l=subseq(ind + 1, arr, ds, n, sum, s);
    

    ds.pop_back();
    s -= arr[ind];
    int r=subseq(ind + 1, arr, ds, n, sum, s);

    return l+r;
}

int main()
{
    int arr[] = {1, 2, 1};
    vector<int> ds;
    int n = 3;
    cout<<subseq(0, arr, ds, n, 3, 0);
    return 0;
}