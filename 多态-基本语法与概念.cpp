#include<bits/stdc++.h>
using namespace std;
//多态
//静态多态:函数重载和运算符载属于静态多态，复用函数名动态多态:派生类和虚函数实现运行时多态
//静态多态和动态多态区别:
//静态多态的函数地址早绑定-编译阶段确定函数地址
//动态多态的函数地址晚绑定-运行阶段确定函数地址

class wujiang
{
public:
    virtual void caidao()//变成虚函数
    {
        cout<<"sha!"<<endl;
    }
};
class xusheng:public wujiang
{
public:
    void caidao()
    {
        cout<<"pojun"<<endl;
    }
};


//地址早绑定 在编译阶段确定函数地址,所以你不管传什么都传的是wujiang
//如果想执行让徐盛出杀，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void chusha(wujiang &a)
{
    a.caidao();
}


void ceshi1() 
{
    xusheng ren;
    chusha(ren);
}


int main()
{
    ceshi1();
    return 0;
}
