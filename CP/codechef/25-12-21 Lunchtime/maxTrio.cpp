#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, n, min, max, p = 0, q = 0;
		cin >> n;
		int a[n], b[n];
		cin >> a[0];
		min = a[0];
		max = a[0];
		for (i = 1; i < n; i++)
		{
			cin >> a[i];
			if (min > a[i])
			{
				min = a[i];
				p = i;
			}
			if (max < a[i])
			{
				max = a[i];
				q = i;
			}
		}
		int maxRes, count=1;
		for (i = 0; i < n; i++)
		{
			b[i] = (max - min) * a[i];
			if(i!=p && q!=i && count>0){
				maxRes = b[i];
				count--;
			}

			if (maxRes < b[i] && p!=i && q!=i)
				maxRes = b[i];
		}
		cout<<maxRes<<endl;
		// cout << max << " " << min << endl;
		// cout << q << " " << p << endl;
	}
	return 0;
}
