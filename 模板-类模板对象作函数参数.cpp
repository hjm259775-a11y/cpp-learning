#include<bits/stdc++.h>
using namespace std;
//类模板对象作函数参数
template<class T1,class T2>
class myn
{
public:

    myn(T1 n,T2 a)
    {
        this->name=n;
        this->age=a;
    }
    void shuchu()
    {
        cout<<name<<" "<<age<<endl;
    }

    T1 name;
    T2 age;
};


//1.指定传入类型
void shuchu(myn<string,int>&p)
{
    p.shuchu();
}

void ceshi1()
{   
    myn<string,int>p1("leziren",18);
    shuchu(p1);
}

//参数模板化
template<class T1,class T2>
void shuchu1(myn<T1,T2>&p)
{
    p.shuchu();
    cout<<typeid(T1).name()<<endl;
    cout<<typeid(T2).name()<<endl;
}
void ceshi2()
{
    myn<string,int> p2("jiexusheng",24);
    shuchu1(p2);
}

//整个类模板化
template<class T>
void shuchu3(T &p)
{
    p.shuchu();
}
void ceshi3()
{
    myn<string,int> p3("caojie",16);
    shuchu(p3);
}

int main()
{
    ceshi1();
    ceshi2();
    ceshi3();
    return 0;
}