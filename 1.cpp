#include<bits/stdc++.h>
using namespace std;
using namespace std::placeholders;
//通用函数包装器function
//它能存储：普通函数、Lambda 表达式、成员函数、仿函数对象等
//它让“函数”也能像普通变量一样传来传去，用于回调最方便

#include<functional>

//语法：function<返回类型(参数类型列表)> 变量名

void shuchu(string s)
{
    cout<<s<<endl;
}
void ceshi1(string s,function<void(string)> xgz)
{
    xgz(s);
}





using hajimi=function<int(int a)>;//与using一同使用




void l1(int a,int b)
{
    cout<<a<<" "<<b<<endl;
}




void print(int &x)
{
    cout<<x<<endl;
    ++x;
}
//引用时下面需加ref



int main()
{
    ceshi1("界徐盛",shuchu);

    auto f = bind(l1, _1, 100);
    f(10);

    auto ff=bind(l1,_2,_1);
    ff(10,20);

    auto fff=bind(l1,10,20);
    fff();

    int a=5;
    auto h=bind(print,ref(a));
    h();
    h();

    return 0;
}