#include<bits/stdc++.h>
using namespace std;
//继承中同名静态成员的处理方法

class fulei
{
public:
    static void le()
    {
        cout<<"fu"<<endl;
    }

    static int a;
};
int fulei::a=100;


class zi1:public fulei
{
public:
    static void le()
    {
        cout<<"zi"<<endl;
    }
    static int a;
};
int zi1::a=200;

void ceshi1() 
{
    zi1 p;
    //静态对象
    //通过对象访问
    cout<<p.a<<endl;
    cout<<p.fulei::a<<endl;

    //通过类名访问
    cout<<zi1::a<<endl;
    //第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
    cout<<zi1::fulei::a<<endl;


    //静态函数
    p.le();
    p.fulei::le();

    zi1::le();
    zi1::fulei::le();
}


int main()
{
    ceshi1();
    return 0;
}
