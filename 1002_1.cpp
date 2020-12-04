#include<iostream>
#include<vector>
#include<algorithm>
struct poly
{	
	int exp;
	double coe;
	bool operator<(const poly&other) {
		return other.exp<this->exp;
	}
};
int main() {
	int l_1,l_2;
	std::vector<poly> p_1,p_2;
	std::cin>>l_1;
	for(int i = 0;i<l_1;++i) {
		poly p;
		std::cin>>p.exp>>p.coe;
		p_1.push_back(p);
	}
	std::cin>>l_2;
	for(int j = 0;j<l_2;++j) {
		poly p;
		std::cin>>p.exp>>p.coe;
		p_2.push_back(p);
	}
	for(auto& X:p_1) {
		for(int ii = 0;ii<p_2.size();++ii) {
			if(p_2.at(ii).exp==X.exp) {
				X.coe += p_2.at(ii).coe;
				p_2.erase(p_2.begin()+ii);
				break;
			}
		}
	}
	for(auto& Y:p_2) {
		p_1.push_back(std::move(Y));
	}
	
	std::sort(p_1.begin(),p_1.end());
	for(int i_1 = 0;i_1<p_1.size();++i_1) {
		if(p_1.at(i_1).coe == 0)
		{	
			p_1.erase(p_1.begin()+i_1);
			i_1 = 0;
		}
			
	}
	std::cout<<p_1.size();
	for(int jj = 0;jj<p_1.size();jj++) {
		printf(" %d %.1f", p_1.at(jj).exp, p_1.at(jj).coe);
	}
	
}


