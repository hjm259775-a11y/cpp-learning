#include<bits/stdc++.h>
using namespace std;
//每个类都会默认添加
//1.默认构造函数(无参，函数体为空)
//2.默认析构函数(无参，函数体为空)
//3.默认拷贝构造函数，对属性进行值拷贝

//构造函数调用规则如下:
// 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
// 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
class myn
{
public:
    myn()
    {
        cout<<"默认构造"<<endl;
    }
    myn(int a)
    {
        age=a;
        cout<<"有参构造"<<endl;
    }

    myn(const myn& p)
    {
        age=p.age;
        cout<<"拷贝构造"<<endl;
    }


    ~myn()
    {
        cout<<"默认析构"<<endl;
    }



    int age;
};


void ceshi1()
{
    myn hhh;
    hhh.age=10;

    myn h(hhh);

    cout<<h.age<<endl;
}


int main(){

    ceshi1();


    
    return 0;
}