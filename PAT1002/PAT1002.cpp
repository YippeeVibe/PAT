#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	//读取输入。int k1,k2来分别表示两个polynomials中 nonzero terms 的项数，
	//float a1[30],n1[20]分别表示两个polynomials的指数（exponets）和系数（coefficients)。
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
	//排序。这就很乱了，总之是乱排，执行时间和内存都很高？联系一下经典的排序：插入、查找、冒泡等吧，写这个之前对他们并不了解。
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
	//删去为零的项，无语了···
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
	
	//格式化输入 cout是很方便，但是在这里怎么用啊？
	cout << v-m;
	for (int i = 0; i < v-m; ++i)
	{

		printf(" %.0f %.1f", a1[i], n1[i]);
	}
	while (cin.get() != '0');//黑框框别跑太快。
	
	
    return 0;
}

