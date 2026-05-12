#include<bits/stdc++.h>
using namespace std;
//虚析构和纯虚析构

class fu
{
public:
    fu()
    {
        cout<<"fu构造"<<endl;
    }
    // virtual ~fu()//加上virtual，变成虚析构，这样就会走子类中的析构代码
    // {
    //     cout<<"fu析构"<<endl;
    // }

    virtual ~fu()=0;//纯虚析构

    virtual void shuo()=0;
};
fu::~fu()
{
    cout<<"fu析构"<<endl;
}//纯虚析构需要加这个

class mao:public fu
{
public:
    mao(string m)
    {
        cout<<"mao构造"<<endl;
        name=new string(m);
    }
    virtual void shuo()
    {
        cout<<*name<<"喵~"<<endl;
    }
    ~mao()
    {
        if(name!=NULL)
        {
            cout<<"mao析构"<<endl;
            delete name;
            name=NULL;
        }
    }

    string *name;
};

void ceshi1()
{
    fu *p=new mao("tom");
    p->shuo();

    //父类指针在析构时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
    delete p;
}

int main()
{
    ceshi1();
    return 0;
}
