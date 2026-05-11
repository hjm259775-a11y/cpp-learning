#include<bits/stdc++.h>
using namespace std;
//父类和子类同名成员处理

class fulei
{
public:
    fulei()
    {
        a=100;
    }
    void le()
    {
        cout<<"fu"<<endl;
    }
    int a;
};

class zi1:public fulei
{
public:
    zi1()
    {
        a=200;
    }
    void le()
    {
        cout<<"zi"<<endl;
    }
    int a;
};

void ceshi1() 
{
    zi1 p;
    //同名对象
    cout<<p.a<<endl;//访问子类a
    cout<<p.fulei::a<<endl;//访问父类的a
    
    //同名函数
    p.le();//访问子类的函数
    p.fulei::le();//访问父类的函数
}


int main()
{
    ceshi1();
    return 0;
}
