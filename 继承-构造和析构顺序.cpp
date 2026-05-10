#include<bits/stdc++.h>
using namespace std;
//继承中的构造和析构顺序

class fulei
{
public:
    fulei()
    {
        cout<<"父构造"<<endl;
    }    
    ~fulei()
    {
        cout<<"父析构"<<endl;
    }

    int a;
protected:
    int b;
private:
    int c;
};

class zi1:public fulei
{
public:
    zi1()
    {
        cout<<"子构造"<<endl;
    }    
    ~zi1()
    {
        cout<<"子析构"<<endl;
    }
};

void ceshi1() 
{
    //继承中的构造和析构如下
    //先构造父类，再构造子类，析构顺序与构造顺序相反
    zi1 hh;
    fulei p;
    
}


int main()
{
    ceshi1();
    return 0;
}
