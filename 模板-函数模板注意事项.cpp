#include<bits/stdc++.h>
using namespace std;
//函数模板注意事项

template<class T>
void jiao(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

//1、自动类型推导，必须推导出一致的数据类型T才可以使用
void ceshi1()
{
    char a='a';
    int b=10;
    //jiao(a,b);//错的
}

//2、模板必须要确定出T的数据类型，才可以使用


int main()
{
    ceshi1();
    ceshi2();
    return 0;
}