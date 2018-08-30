#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string tt;
	cin >> tt;
	//求和
	unsigned int sum=0;
	for (unsigned int i = 0; i < tt.size(); ++i)
	{
		sum = sum + tt[i]-'0';
	}
	vector<int> shuchu;
	vector<string> en = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	do
		{
			shuchu.push_back(sum % 10);
			sum = sum / 10;
	} while (sum != 0);
		cout << en[shuchu[shuchu.size() - 1]];
		for (int i = shuchu.size()-1; i > 0; --i)
		{
			cout<< " "<<en[shuchu[i - 1]];
		}
		system("pause");
		return 0;
}
