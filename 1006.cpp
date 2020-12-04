#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct person {
    string id;
    string signIntime;
    string signOuttime;
};
bool com(const string&l,const string&r) {
    if(stoi(l.substr(0,2))>stoi(r.substr(0,2))) {
        return true;
    } else if(stoi(l.substr(0,2))<stoi(r.substr(0,2))) {
        return false;

    } else {

        if(stoi(l.substr(3,2))>stoi(r.substr(3,2))) {
            return true;

        } else if(stoi(l.substr(3,2))<stoi(r.substr(3,2))) {
            return false;
        } else {
            if(stoi(l.substr(3,2))>stoi(r.substr(3,2))) {
                return true;
            } else if(stoi(l.substr(3,2))<stoi(r.substr(3,2))) {
                return false;
            } else {
                return true;
            }
            
        }
    }
}
int main() {
    int pCount;
    cin>>pCount;
}
