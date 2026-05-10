#include<bits/stdc++.h>
using namespace std;
//关系运算符重载

class myn
{

public:
    myn(string h,int a)
    {
        mingzi=h;
        age=a;
    }

    //重载==号
    bool operator==(myn &p)
    {
        if(this->mingzi==p.mingzi && this->age==p.age)
        {
            return true;
        }
        return false;
    }


    string mingzi;
    int age;


};





void ceshi1() 
{
    myn p1("踏马",18);
    myn p2("踏马",18);
    if(p1==p2)
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }
}



int main()
{
    ceshi1();
    return 0;
}
