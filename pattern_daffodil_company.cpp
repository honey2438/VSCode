#include <iostream>
using namespace std;
int
main ()
{
  int n, l = 1, x = 1;
  cout << "Enter the value of n";
  cin >> n;
  int k = (n-1) * n;
  for (int i = 1; i <= n-1; i++)
    {
      int m = 0;
      for (int j = 1; j <= 2 * n - i-1; j++)
	{
	  if (j < i)
	    {
	      cout << " ";
	    }
	  else if (j <= n - 1)
	    {
	      cout << l;
	      l++;
	    }
	  else if (j > n - 1)
	    {
	      if (k == n * (n-1))
		{
		  k = k - n + i + 1;
		  m = k;
		  cout << m;
		  m++;
		}
	      else if (x != i)
		{
		  k = k - n + i;
		  m = k;
		  cout << m;
		  m++;
		  x = i;
		}
	      else
		{
		  cout << m;
		  m++;
		}

	    }
	}
	cout<<endl;
    }

  return 0;
}
