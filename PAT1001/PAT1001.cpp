#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int c=a+b;
	if(c<0) 
		{
			cout<<"-";
			c=-c;
	}
	int d[10]={0,0,0,0,0,0,0,0,0,0};
	int e=0;
	 for(int i=0;c>0;++i)
	 {
		 d[i]=c%10;
		 c=c/10;
		 e=i;
	 }
	 for(int j=e;j>=0;--j)
	 {
		 cout<<d[j];
		 if(j%3==0&&j!=0) cout<<",";
		 
	 }
	return 0;
}
	
