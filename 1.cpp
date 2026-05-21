#include<bits/stdc++.h>
using namespace std;
//类模板与函数模板区别主要有两点:
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数.

template<class NAME,class AGE=int>//这就是默认参数
class myn
{
public:
    myn(NAME n,AGE a)
    {
        this->age=a;
        this->name=n;
    }
    void shuchu()
    {
        cout<<this->name<<" "<<this->age<<endl;
    }


    NAME name;
    AGE age;
};


//1.类模板没有自动类型推导的使用方式
void ceshi1()
{   
    myn<string,int>p1("leziren",18);
    p1.shuchu();

}

//2.类模板在模板参数列表中可以有默认参数
void ceshi2()
{
    myn<string>p2("hajimi",10);//删了个int
    p2.shuchu();
}


int main()
{
    ceshi1();
    ceshi2();
    return 0;
}