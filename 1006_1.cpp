#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/*
1. 不需要debug是假的，这是因为，你很可能拼写错字，有些变量拼错了
2. 逻辑要严密是必须的，不要着急，失误比谨慎要浪费时间，不要把变量名称拼错。
3. 谷歌代码风格是虚的，微软的风格在这个时候才是最好用的，兼顾了易读，和易写，就按照这个来
4. 使用using namespace std;,减少打字时间。
5. 前两道题，一般不考什么数据结构，通常十分简单。
*/
using namespace std;
struct person
{
    string id;
    int It;
    int Ot;
};
int strTimetoInt(const string& strtime) {
    return stoi(strtime.substr(0,2))*3600+stoi(strtime.substr(3,2))*60+stoi(strtime.substr(6,2));
}

vector<person> personroom;
vector<int> InOutTime;
int main()
{
    int pCount;
    cin >> pCount;
    for(int i = 0;i<pCount;++i) {
        person p;
        string Itime,Otime;
        cin>>p.id>>Itime>>Otime;
        p.It = strTimetoInt(Itime);
        p.Ot = strTimetoInt(Otime);
        personroom.push_back(p);
        InOutTime.push_back(p.It);
        InOutTime.push_back(p.Ot);
    }

    sort(InOutTime.begin(),InOutTime.end());
    int i = 0;
    string inId,OutId;
    for(auto& X:personroom)
    {
        if(X.It == InOutTime.at(0))
        {
            inId = X.id;
            i++;
        }
        if(X.Ot == InOutTime.back())
        {
            OutId = X.id;
            i++;
        }
        if(i==2)
            break;
    }
    cout<<inId<<" "<<OutId;
   
}
