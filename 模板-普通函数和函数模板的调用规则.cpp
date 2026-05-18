#include<bits/stdc++.h>
using namespace std;
//普通函数和函数模板的调用规则
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配,优先调用函数模板

void hanshu(int a,int b)
{
    cout<<"普通函数"<<endl;
}

template<class T>
void hanshu(T a,T b)
{
    cout<<"函数模板"<<endl;
}
template<class T>
void hanshu(T a,T b,T c)
{
    cout<<"重载的函数模板"<<endl;
}

void ceshi1()
{
    int a=10;
    int b=20;
    int c=30;
    hanshu(a,b);//这边优先调了普通函数
    //1.如果函数模板和普通函数都可以实现，优先调用普通函数



    //2.可以通过空模板参数列表来强制调用函数模板
    hanshu<>(a,b);


    //3.函数模板也可以发生重载
    hanshu(a,b,c);


    //4.如果函数模板可以产生更好的匹配,优先调用函数模板
    char aa='a';
    char bb='b';
    hanshu(aa,bb);//因为是字符，不用转换，直接用的模板
}

int main()
{
    ceshi1();
    return 0;
}