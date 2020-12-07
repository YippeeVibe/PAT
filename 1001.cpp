#include<iostream>
#include<string>
/*    写算法真的可以让code思维变得，高效，简洁和优雅。
- 第一步是分析问题，逐步解决已经确定的问题。
- 对容量与索引的理解，可以加快速度。
- C++标准库要好好的利用。
- std::to_string 是一个好用的利器。
*/
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
