#include<bits/stdc++.h>
using namespace std;
//加号运算符重载
//为了实现两个自定义数据类型的假加法

class myn
{
public:

    //成员函数重载+号
    myn operator+(myn &p)
    {
        myn temp;
        temp.a=this->a+p.a;
        temp.b=this->b+p.b;
        return temp;
    }


    int a;
    int b;

};

//全局函数重载+号
myn operator+(myn &p1,myn &p2)
{
    myn temp;
    temp.a=p1.a+p2.a;
    temp.b=p1.b+p2.b;
    return temp;
}


void ceshi1() 
{
    myn p1;
    p1.a=10;
    p1.b=10;
    myn p2;
    p2.a=10;
    p2.b=15;

    myn p3=p1.operator+(p2);

    cout<<p3.a<<" "<<p3.b<<endl;



    myn q1;
    q1.a=5;
    q1.b=5;
    myn q2;
    q2.a=15;
    q2.b=15;

    myn q3=operator+(q1,q2);

    cout<<q3.a<<" "<<q3.b<<endl;

}

int main()
{
    ceshi1();
    return 0;
}
