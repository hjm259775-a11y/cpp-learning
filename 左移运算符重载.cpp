#include<bits/stdc++.h>
using namespace std;
//左移运算符重载


class myn
{
public:
    //利用成员函数重载 左移运算符
    //局限性较多，且无法使得“cout<<p”，只能“p<<cout”
    int a;
    int b;

};

//只能用全局函数重载 左移运算符
ostream & operator<<(ostream &cout,myn p)//输出时可以简化成cout<<p; 
{
    cout<<p.a<<" "<<p.b<<endl;
    return cout;
}



void ceshi1() 
{
    myn p;
    p.a=10;
    p.b=10;
    cout<<p.a<<" "<<p.b<<endl;
    cout<<p<<endl;//就可以用这种输出了
}



int main()
{
    ceshi1();
    return 0;
}
