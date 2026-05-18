#include<bits/stdc++.h>
using namespace std;
//普通函数和函数模板的区别
//1、普通函数调用可以发生隐式类型转换
//2、函数模板 用自动类型推导，不可以发生隐式类型转换
//3、函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
int hanshu1(int a,int b)
{
    return a+b;
}

void ceshi1()
{
    int a=10;
    int b=20;
    cout<<hanshu1(a,b)<<endl;
}

//函数模板
template<class T>
T hanshu2(T a,T b)
{
    return a+b;
}
void ceshi2()
{
    int a=20;
    int b=10;
    int c='c';
    cout<<hanshu2(a,c)<<endl;
}

int main()
{
    ceshi1();
    ceshi2();
    return 0;
}