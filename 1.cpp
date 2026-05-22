#include<bits/stdc++.h>
using namespace std;
//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建

class myn1
{
public:
    void shuchu()
    {
        cout<<"1输出"<<endl;
    }
};

class myn2
{
public:
    void shuchu()
    {
        cout<<"2输出"<<endl;
    }
};

template<class T>
class myn
{
public:
    T hhh;
    //类模板中的成员函数
    void hanshu1()
    {
        hhh.shuchu();
    }
};


void ceshi1()
{   

}


int main()
{
    ceshi1();
    return 0;
}