#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/*
1. ����Ҫdebug�Ǽٵģ�������Ϊ����ܿ���ƴд���֣���Щ����ƴ����
2. �߼�Ҫ�����Ǳ���ģ���Ҫ�ż���ʧ��Ƚ���Ҫ�˷�ʱ�䣬��Ҫ�ѱ�������ƴ��
3. �ȸ����������ģ�΢��ķ�������ʱ���������õģ�������׶�������д���Ͱ��������
4. ʹ��using namespace std;,���ٴ���ʱ�䡣
5. ǰ�����⣬һ�㲻��ʲô���ݽṹ��ͨ��ʮ�ּ򵥡�
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
