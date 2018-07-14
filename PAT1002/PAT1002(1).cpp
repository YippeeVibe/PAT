#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
int k1, k2;
struct p
{
	float exp=0;
	float coe=0;
};
int main()
{
	vector<p>  poly;
	cin >> k1;
	p v;
	for (int i = 0; i < k1; ++i)
	{
		cin >> v.exp >> v.coe;
		poly.push_back(v);
	}
	cin >> k2;
	for (int i = 0; i < k2; ++i)
	{
		cin >> v.exp >> v.coe;
		poly.push_back(v);
	}
	for (decltype(poly.size()) i = 0; i < poly.size(); ++i)
	{
		for (decltype(i) j = i + 1; j < poly.size(); ++j)
		{
			if (poly[i].exp < poly[j].exp)
				swap(poly[i], poly[j]);
			else if (poly[i].exp == poly[j].exp)
			{
				poly[i].coe += poly[j].coe;
				poly.erase(poly.begin()+j);
				if (poly[i].coe == 0)
					poly.erase(poly.begin() + i);
			}
		}
	}
	cout << poly.size();
	cout.precision(1);
	for (decltype(poly.size()) i = 0; i < poly.size(); ++i)
		printf(" %.0f %.1f", poly[i].exp, poly[i].coe);
	while (cin.get() != 0);
	return 0;
}
		

