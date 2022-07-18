#include <iostream>
using namespace std;
int
main ()
{
  int n, l = 1, x = 2;
  cout << "Enter the value of n";
  cin >> n;
  int k = 4 * n;
  for (int i = 1; i <= n-1; i++)
    {
      int m = 0;
      for (int j = 1; j <= 2 * n - 2 * i; j++)
	{
	  if (j < i)
	    {
	      cout << " ";
	    }
	  else if (j <= n - 1)
	    {
	      cout << l<<" ";
	      l++;
	    }
	  else if (j > n - 1 && j <= 2 * n - 2 * i)
	    {
	      if (k == n * 4)
		{
		  k = k - n + i + 1;
		  m = k;
		  cout << m<<" ";
		  m++;
		}
	      else if (x != i)
		{
		  k = k - n + i;
		  m = k;
		  cout << m<<" ";
		  m++;
		  x = i;
		}
	      else
		{
		  cout << m<<" ";
		  m++;
		}

	    }
	}
	cout<<endl;
    }

  return 0;
}
