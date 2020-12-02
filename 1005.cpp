#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::string input;
	std::cin>>input;
	int sum{0};
	for (auto& X:input)
	{
		sum+=X-'0';
	}
	std::vector<std::string> en = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	std::string sum_str = std::to_string(sum);
	for(int i = 0;i<sum_str.size();++i) {
		std::cout<<en.at(sum_str.at(i)-'0');
		if(i!=sum_str.size()-1) {
			std::cout<<" ";
		}
	}
	//不能输入 退格"\b"
}
