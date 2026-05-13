#include<bits/stdc++.h>
using namespace std;
//函数模板

//交换两个整形数
void jiaozheng(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}

//交换两个浮点型数
void jiaofu(double &a,double &b)
{
    double temp=a;
    a=b;
    b=temp;
}

//函数模板
template<typename T>//声明一个模板
//告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void jiao(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}


void ceshi1()
{
    int a=10;
    int b=20;
    //jiaozheng(a,b);
    jiao(a,b);
    cout<<a<<" "<<b<<endl;

    double c=1.1;
    double d=2.2;
    //jiaofu(c,d);
    jiao<double>(c,d);
    cout<<c<<" "<<d<<endl;
}


int main()
{
    ceshi1();
    return 0;
}