#include<bits/stdc++.h>
using namespace std;
//静态成员函数
//所有对象共享一个函数
//静态成员函数只能访问静态成员变量
class myn
{
public:
    static void hanshu()//加static变成静态成员函数
    {
        cout<<"静态成员函数"<<endl;
    }

private:


};




void ceshi1()
{
    //访问静态成员函数
    //1、通过对象访问
    myn p;
    p.hanshu();
    //2、通过类访问
    myn::hanshu();
}
void ceshi2()
{

}

int main(){
    ceshi1();

    return 0;
}