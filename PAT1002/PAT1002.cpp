#include<iostream>
using namespace std;
int main()
{
	int k1, k2;
	float a1[30],n1[20];
	cin >> k1;
	for (int i = 0; i<k1; ++i)
	{
		cin >> a1[i] >> n1[i];

	}
	cin >> k2;
	for (int i = k1; i < k2+k1;++i)
	{
		cin >> a1[i] >> n1[i];
		

	}
	int v = k1 + k2;
	
	for (int i = 0; i < k1 + k2; ++i)
	{
		for (int j = i+1; j < k1 + k2; ++j)
			if (a1[i] < a1[j])
			{
				swap(a1[i], a1[j]);
				swap(n1[i], n1[j]);
			}
			else if (a1[i] == a1[j])
			{
		            n1[i] = n1[i] + n1[j];
					a1[j] = -2000-i;
					--v;
				
			}
	}
	int m = 0;
	for (int i = 0; i < v; ++i)
	{
		if (n1[i] == 0)
		{
			m++;
			for (int j = i; j < v; ++j)
			{
				n1[j] = n1[j + 1];
				a1[j] = a1[j + 1];
			}
		}
	}
	
	
	cout << v-m;
	for (int i = 0; i < v-m; ++i)
	{

		printf(" %.0f %.1f", a1[i], n1[i]);
	}
    return 0;
}


