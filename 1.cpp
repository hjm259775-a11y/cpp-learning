#include<bits/stdc++.h>
using namespace std;
//类模板与函数模板区别主要有两点:
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数
//
template<class NAME,class AGE>
class myn
{
public:
    
    string name;
    int age;
};

void ceshi1()
{

}

int main()
{
    ceshi1();
    return 0;
}