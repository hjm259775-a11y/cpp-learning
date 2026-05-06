#include<bits/stdc++.h>
using namespace std;
//静态成员变量
class myn
{
public:
    static int cc;//加上static变成静态成员变量
    //所有对象共享同一份数据
    //编译阶段就分配了内存
    //类内声明，类外仍需初始化操作

private:
    //静态成员变量也是有访问权限的
    static int ccb;

};
int myn::cc=100;//类外声明
int myn::ccb=1000;



void ceshi1()
{
    myn p1;
    cout<<p1.cc<<endl;

    myn p2;
    p2.cc=200;
    cout<<p2.cc<<endl;
    cout<<p1.cc<<endl;//p1被修改为200，此为共享数据
}
void ceshi2()
{
    //静态成员变量不属于某个对象上，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式
    //1、通过对象进行访问
    myn q;
    cout<<q.cc<<endl;
    //2、通过类名进行访问
    cout<<myn::cc<<endl;//欸！完全可以不创建类
}

int main(){
    ceshi1();
    cout<<endl;
    ceshi2();
    //cout<<myn::ccb<<endl;//私有，访问不到
    return 0;
}