#include<bits/stdc++.h>
using namespace std;
//成员变量和成员函数是分开存储的
class myn
{
    int a;//非静态，属于对象
    static int bb;//静态，不属于对象

    void hanshu(){}//非静态函数
    static void hanshu1(){}//静态函数
};

void ceshi1()
{
    myn p;
    // C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    cout<<sizeof(p)<<endl;
}

void ceshi2()
{
    myn hhh;
    cout<<sizeof(hhh)<<endl;
}
void ceshi3()
{
    myn le;
    cout<<sizeof(le)<<endl;
}

int main()
{
    ceshi1();//空的占用一个字节
    ceshi2();//要是有变量就按变量大小占用
    ceshi3();//没算静态，说明静态对象不属于对象
    return 0;
}