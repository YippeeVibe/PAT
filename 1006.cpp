#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

vector<person> OutRoom,InRoom;
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
        OutRoom.push_back(p);
        InOutTime.push_back(p.It);
        InOutTime.push_back(p.Ot);
    }

    sort(InOutTime.begin(),InOutTime.end());

    for(int k=0;k<InOutTime.size();++k) {
        int& X = InOutTime.at(k);
        string WillInPerson{""},WillOutPerson{""};
        for(int i = 0;i<OutRoom.size();++i) {          
            if(X==OutRoom[i].It)
            {
                WillInPerson = OutRoom[i].id;
                InRoom.push_back(OutRoom[i]);
                OutRoom.erase(OutRoom.begin()+i);
                break;
            }
        }
        for(int j = 0;j<InRoom.size();++j)
        {
            if(X == InRoom[j].Ot)
            {
                WillOutPerson = InRoom[j].id;
                OutRoom.push_back(InRoom[j]);
                InRoom.erase(InRoom.begin()+j);
                break;
            }
        }
        if(WillInPerson != ""&&WillOutPerson!="")
        {
            continue;
        }
        if(WillOutPerson!="")
        {
            if(InRoom.size()==0)
            std::cout<<WillOutPerson;

        }

        if(WillInPerson!="")
        {
            if(InRoom.size()==1)
            std::cout<<WillInPerson;
        }
        
        if(k!=InOutTime.size()-1)
        std::cout<<" ";
    }
}
