#include<bits/stdc++.h>
using namespace std;
//赋值运算符重载

class myn
{

public:
    myn (int l)
    {
        a=new int(l);
    }
    ~myn()
    {
        if(a!=NULL)
        {
            delete a;
            a=NULL;
        }
    }

    //重载 赋值运算符
    void operator=(myn &p)
    {
        //编译器提供的是浅拷贝
        //a=p.a;

        //先判断是否有属性在堆区，有就释放干净，然后深拷贝
        if(a!=NULL)
        {
            delete a;
            a=NULL;
        }

        //深拷贝
        a=new int (*p.a);
        
    }

    int *a;

};





void ceshi1() 
{
    myn p1(18);
    myn p2(20);
    cout<<p1.a<<endl;

    p2=p1;
    cout<<*p1.a<<" "<<*p2.a<<endl;
}



int main()
{
    ceshi1();
    return 0;
}
