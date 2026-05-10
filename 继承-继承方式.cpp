#include<bits/stdc++.h>
using namespace std;
//继承方式

class fulei
{
public:
    int a;
protected:
    int b;
private:
    int c;
};



class zi1:public fulei//公共继承
{
public:
    void fangwen()
    {
        a=10;//父类中的公共权限成员，到子类依旧是公共权限
        b=10;//父类中的保护权限成员，到子类依旧是保护成员
        //c=10;//父类中的私有权限成员，子类访问不到
    }
};
void ceshi1() 
{
    zi1 h1;
    h1.a=10;
    //h1.b=10;//b是保护权限，类外访问不到
}



class zi2:protected fulei//保护继承
{
public:
    void fangwen()
    {
        a=10;//父类中的公共权限成员，到子类是保护权限
        b=10;//父类中的保护权限成员，到子类依旧是保护成员
        //c=10;//父类中的私有权限成员，子类访问不到
    }
};
void ceshi2()
{
    zi2 h1;
    // h1.a=10;
    // h1.b=10;//都是保护成员，都访问不到
}



class zi3:private fulei//私有继承  作用：孙子类都无法继承这个子类的对象和成员
{
public:
    void fangwen()
    {
        a=10;//父类中的公共权限成员，到子类是私有成员
        b=10;//父类中的保护权限成员，到子类是私有成员
        //c=10;//父类中的私有权限成员，子类访问不到
    }
};
void ceshi3()
{
    zi3 h1;
    //h1.a=10;
    //h1.b=10;
}

int main()
{
    ceshi1();
    return 0;
}
