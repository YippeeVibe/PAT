#include<iostream>
#include<string>
int main() {
	int a,b,c;
	std::cin>>a>>b;
	c=a+b;
	std::string str = std::to_string(c);
	for(int i = 0;i<str.size();++i) {
		std::cout<<str.at(i);
		if(str.at(i)=='-') continue;
		int distance = str.size()-1-i;
		if (distance%3==0&&distance!=0) {
			std::cout<<",";
		}
	}
	return 0;
}
