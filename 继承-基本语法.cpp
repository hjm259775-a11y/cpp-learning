#include<bits/stdc++.h>
using namespace std;
//继承实现页面

//公共页面类
class gonggong
{
public:
    void caidao()
    {
        cout<<"自刎归天"<<endl;
    }
};

//界徐盛
class xusheng:public gonggong//相当于有了gonggong类的公共区域的对象和函数
{
public:
    void shili()
    {
        cout<<"吴"<<endl;
    }
};
//谋马超
class machao:public gonggong//相当于有了gonggong类的公共区域的对象和函数
{
public:
    void shili()
    {
        cout<<"蜀"<<endl;
    }
};
//界许褚
class xuchu:public gonggong//相当于有了gonggong类的公共区域的对象和函数
{
public:
    void shili()
    {
        cout<<"魏"<<endl;
    }
};




void ceshi1() 
{

}



int main()
{
    ceshi1();
    return 0;
}
