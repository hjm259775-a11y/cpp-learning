#include<bits/stdc++.h>
using namespace std;
//菱形继承

class ye
{
public:
    int a;
};

//利用虚继承，解决菱形继承的问题
class fu1:virtual public ye{};//加上virtual，ye变成虚基类
class fu2:virtual public ye{};
class zi:public fu1,public fu2{};


void ceshi1() 
{
    zi lezi;
    lezi.fu1::a=100;
    lezi.fu2::a=200;
    //当出现菱形继承时，两个父类拥有相同的数据，需要加以作用域区分
    cout<<lezi.fu1::a<<endl;
    cout<<lezi.fu2::a<<endl;


    //cout<<lezi.a<<endl;//报错
    //这份数据其实只需要一份

    //用上virtual后，能用了，现在这是一个数据
    cout<<lezi.a<<endl;
}


int main()
{
    ceshi1();
    return 0;
}
