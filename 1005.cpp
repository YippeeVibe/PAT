#include<iostream>
#include<vector>
#include<string>
/*
- 对于单个字符，-‘0’，可以直接得到一个数字（仅限0-9）。
- 使用std::stoi(const std::string)转换成一个int型，同理 std::stod,转换为double型
- 使用std::strtoi(const char*),转换一个基本字符串为int型。

*/
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
