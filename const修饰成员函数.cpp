#include<bits/stdc++.h>
using namespace std;

class myn
{
public:
    void hanshu() const//加const后，this指向的值也不许改（修饰的是this的指向）
    {
        this->age=100;
        this->name=0;
        //this=NULL; //this指针不可以修改指针指向
    }
    int age;
    mutable int name;//特殊变量，即便在常函数里也能修改
};


void ceshi1()
{
    myn p;
    p.hanshu();
}

void ceshi2()
{
    const myn ccb;//变为常对象
    ccb.age=100;
    ccb.name=100;//可以修改

}

int main()
{
    ceshi1();
    return 0;
}