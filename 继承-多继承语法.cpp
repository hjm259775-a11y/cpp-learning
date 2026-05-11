#include<bits/stdc++.h>
using namespace std;
//多继承语法

class fulei1
{
public:
    fulei1()
    {
        a=100;
    }
    int a;
};
class fulei2
{
public:
    fulei2()
    {
        a=200;
    }
    int a;
};


class zi1:public fulei1,public fulei2
{
public:
    zi1()
    {
        c=300;
        d=400;
    }


    int c;
    int d;
};


void ceshi1() 
{
    zi1 lezi;
    cout<<sizeof(lezi)<<endl;

    cout<<lezi.fulei1::a<<endl;
    cout<<lezi.fulei2::a<<endl;//必须用作用域区分
}


int main()
{
    ceshi1();
    return 0;
}
