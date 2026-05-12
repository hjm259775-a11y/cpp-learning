#include<bits/stdc++.h>
using namespace std;
//多态案例1计算器

class jisuanqi
{
public:
    int caozuo(string fuhao)
    {
        if(fuhao=="+")
        {
            return shu1+shu2;
        }
        else if(fuhao=="-")
        {
            return shu1-shu2;
        }
        else if(fuhao=="*")
        {
            return shu1*shu2;
        }
        //如果想扩展新的功能，需求修改源码
        //在真实开发中，提倡 开闭原则
        //开闭原则:对扩展进行开发，对修改进行关闭
    }
    int shu1;
    int shu2;
};


void ceshi1() 
{
    jisuanqi lezi;
    lezi.shu1=10;
    lezi.shu2=5;
    cout<<lezi.shu1<<"+"<<lezi.shu2<<"="<<lezi.caozuo("+")<<endl;
    cout<<lezi.shu1<<"-"<<lezi.shu2<<"="<<lezi.caozuo("-")<<endl;
    cout<<lezi.shu1<<"*"<<lezi.shu2<<"="<<lezi.caozuo("*")<<endl;
}


//利用多态实现计算器
class jisuan
{
public:
    virtual int yong()
    {
        return 0;
    }

    int a;
    int b;
};

//加法类
class jia:public jisuan
{
public:
    int yong()
    {
        return a+b;
    }
};

//减法类
class jian:public jisuan
{
    int yong()
    {
        return a-b;
    }
};
//多态好处
//1、组织结构清晰
//2、可读性强
//3、对于前期和后期扩展以及维护性高

void ceshi2()
{
    //父类指针或者引用指向子类对象
    jisuan *p=new jia;
    p->a=10;
    p->b=5;
    cout<<p->a<<"+"<<p->b<<"="<<p->yong()<<endl;
    //用完后记得销毁
    delete p;

    jisuan *q=new jian;
    q->a=10;
    q->b=5;
    cout<<p->a<<"-"<<p->b<<"="<<p->yong()<<endl;
    delete q;
}


int main()
{
    ceshi1();
    ceshi2();
    return 0;
}
