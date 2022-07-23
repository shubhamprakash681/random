// C++ implementation of the approach
#include<iostream>
using namespace std;
class gfg
{
	// Function returns the
	// count of the triplets
	public:
	long count_triples(int n, int k);
};

	long gfg :: count_triples(int n, int k)
	{
		int i = 0, j = 0, l = 0;
		int count = 0;

		// iterate for all
		// triples pairs (i, j, l)
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				for (l = 1; l <= n; l++)
				{

					// if the condition
					// is satisfied
					if ((i + j) % k == 0
						&& (i + l) % k == 0
						&& (j + l) % k == 0)
						count++;
				}
			}
		}
		return count;
	}

	// Driver code
	int main()
	{
		gfg g;
		int n = 5;
		int k = 3;
		long ans = g.count_triples(n, k);
		cout << ans;
	}
//This code is contributed by Soumik
