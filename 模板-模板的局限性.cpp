#include<bits/stdc++.h>
using namespace std;
//模板的局限性

class myn
{
public:
    myn(string n,int a)
    {
        this->name=n;
        this->age=a;
    }

    string name;
    int age;
};

//对比两个数据是否相等
template<class T>
bool hanshu(T &a,T &b)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//利用具体化Person的版本实现代码，具体化优先调用
 template<> bool hanshu(myn &p1,myn &p2)
 {
    if(p1.name==p2.name && p1.age==p2.age)
    {
        return true;
    }
    else
    {
        return false;
    }
 }

void ceshi1()
{
    int a=10;
    int b=20;
    bool shi=hanshu(a,b);
    if(shi)
    {
        cout<<"a和b相等"<<endl;
    }
    else
    {
        cout<<"a和b不相等"<<endl;
    }
}

void ceshi2()
{
    myn p1("leziren",18);
    myn p2("leziren",18);

    bool shi=hanshu(p1,p2);
    if(shi)
    {
        cout<<"p1和p2相等"<<endl;
    }
    else
    {
        cout<<"p1和p2不相等"<<endl;
    }
}

int main()
{
    ceshi1();
    ceshi2();
    return 0;
}