#include<iostream>
#include<vector>
#include<algorithm>
struct poly
{	
	int exp;
	double coe;
};
int main() {
	///接受输入
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
	//计算
	int k1 = 0;
	int k2 = 0;
	while(true) {		
		if(p_1[k1].exp >p_2[k2].exp) {
			k1++;
		} else if (p_1[k1].exp<p_2[k2].exp) {
			p_1.insert(p_1.begin()+k1,p_2[k2]);
			k1++;
			k2++;

		} else if(p_1[k1].exp == p_2[k2].exp) {
			double v = p_1[k1].coe + p_2[k2].coe;
			if(v==0) {
				p_1.erase(p_1.begin()+k1);
				k1--;
			} else {
				p_1[k1].coe = v;
			}
			k1++;
			k2++;
		}
		if(k2 >= p_2.size()) {
			break;
		} else if(k1 >= p_1.size()) {
			p_1.insert(p_1.end(),p_2.begin()+k2,p_2.end());
			break;
		}
	}	
	std::cout<<p_1.size();
	for(auto& X:p_1) {
		printf(" %d %.1f",X.exp,X.coe);
	}	
}

